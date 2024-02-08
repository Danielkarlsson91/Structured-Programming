/*Make a template print function to print an array.
Make a template function pointer type to point to the print function
Call the print function using an instance of the function pointer type to print an example array of type int.*/

#include <iostream>

// Function template to print an array of a given type and size
template <typename T, size_t SIZE>
static void print(const T arr[SIZE])
{
  for (size_t i = 0; i < SIZE; i++)
  {
    std::cout << arr[i] << "\t";
  }

  std::cout << endl;
}

// Template alias for a function pointer type that takes an array of a given type and size
template <typename T, size_t SIZE>
using func_t = void (*)(const T[SIZE]);

// Template structure to represent an array type
template <typename T>
struct array
{
};

// Template specialization for array types with a specific size
template <typename T, size_t SIZE>
struct array<T[SIZE]>
{
  using elem_type = T;                // Type of elements in the array
  static constexpr size_t size{SIZE}; // Size of the array
};

int main()
{
  int arr[]{1, 2, 3, 4, 5};

  // Using the array template to get the element type and size
  using type = array<decltype(arr)>::elem_type;
  constexpr size_t size{array<decltype(arr)>::size};

  // Using the template alias to declare a function pointer type
  func_t<type, size> pptr{print<type, size>};

  // Calling the function pointer to print the array
  pptr(arr);

  return 0;
}