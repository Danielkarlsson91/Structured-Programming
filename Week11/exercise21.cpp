/*Make a template function named map to map a value in a range to a value in another range.
Type of the ranges shall be arithmetic types.
Example: 0.5f in the range of 0.0f and 3.3f is mapped to 155 in the range of 0 and 1023*/

#include<iostream>

using namespace std;

// Template structure representing a range of values
template<typename T>
struct Range
{
    T min;  // Minimum value of the range
    T max;  // Maximum value of the range
};

#if 0

// Template function to map a value from one range to another
template<typename F, typename T>
std::enable_if_t<std::is_arithmetic<T>::value, T> map(std::enable_if_t<std::is_arithmetic_v<F>, F> value, Range<F> from, Range<T> to)

#else

// Template function to map a value from one range to another with improved SFINAE
template<typename F, typename T, typename = std::enable_if_t<std::is_arithmetic_v<T> && std::is_arithmetic_v<F>>>
T map(F value, Range<F> from, Range<T> to)

#endif
{
    // Mapping formula to convert 'value' from the 'from' range to the 'to' range
    return (((to.max - to.min) / (from.max - from.min)) * (value - from.min) + to.min);
}

int main()
{
    // Define a range for floating-point numbers
    Range<float> from{0.0f, 3.3f};

    // Define a range for integers
    Range<int> to{0, 1023};
    
    // Map a value from the 'from' range to the 'to' range and print the result
    cout << map<float, int>(0.5f, from, to) << endl;

    return 0;
}