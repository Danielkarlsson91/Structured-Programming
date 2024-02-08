/*Generate and store 1000 random numbers in the range of 100 and 100000 in a vector,
then remove the non-prime numbers from the vector and in the end using an iterator
print the elements in the vector (in ascending order) to the terminal.*/

#include <cmath>
#include <ctime>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// Constants
constexpr int NUMBER{1000};
constexpr int FIRST_PRIME{2};
constexpr int RANGE_MIN{100};
constexpr int RANGE_MAX{100000};

// Function to check if a number is nonprime
static bool isnonprime(int num)
{
    bool status{true};

    // Numbers less than 2 are not prime
    if (num >= FIRST_PRIME)
    {
        status = false;

        // Check for nonprimality using trial division
        if (num > FIRST_PRIME)
        {
            status = true;

            // Calculate the maximum divisor to check up to (square root of the number)
            const int max_num{static_cast<int>(std::sqrt(num)) + 1};

            // Loop through potential divisors
            for (int i = FIRST_PRIME; i <= max_num; i++)
            {
                // If the number is divisible, it's nonprime
                if (num % i == 0)
                {
                    status = false;
                    break;
                }
            }

            // Flip the status to indicate whether the number is nonprime
            status = !status;
        }
    }

    return status;
}

int main()
{
    // Seed the random number generator with the current time
    srand(time(nullptr));

    // Vector to store random numbers
    vector<int> vec;

    // Generate and store random numbers in the vector
    for (int i = 0; i < NUMBER; i++)
    {
        vec.push_back(rand() % (RAND_MAX - RANGE_MIN) + RANGE_MIN);
    }

    // Remove nonprime numbers from the vector using erase and remove_if
    vec.erase(remove_if(vec.begin(), vec.end(), isnonprime), vec.end());

    // Sort the vector in ascending order
    sort(vec.begin(), vec.end());

    // Output the size of the vector
    cout << "Size: " << vec.size() << endl;

    // Output each element of the vector using a lambda function
    for_each(vec.begin(), vec.end(), [](const auto &elem)
             { cout << elem << endl; });

    return 0;
}