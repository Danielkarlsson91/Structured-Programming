/*A circle is a shape which has a center point and a radius.
A square is a shape which has a length(four equal sides).
Every shape has a name and an area. Every point has x and y on the 2d cartesian coordinate system.
Make a Shape class and a Point class.
Make a Circle class based on Shape.
The class shall have a function to get area of a circle.
It shall be possible to  check if two circles are equal or not by overloading the == operator.
Make a Square class based on Shape. The class shall have a function to get area of a square.
Make a function to print area of any shape.*/

#include <iostream>

using namespace std;

// Point class representing a 2D point
class Point
{
  int x, y;

public:
  Point(int _x, int _y) : x{_x}, y{_y}
  {
    // Constructor to initialize x and y coordinates
  }

  // Overloaded equality operator to compare two points
  bool operator==(const Point &point)
  {
    return ((x == point.x) && (y == point.y));
  }
};

// Abstract base class Shape
class Shape
{
  string name;

public:
  // Constructor to initialize the name of the shape
  Shape(string _name) : name{_name}
  {
    // Constructor to initialize the name of the shape
  }

  // Function to get the name of the shape
  string getName() const
  {
    return name;
  }

  // Pure virtual function to get the area of the shape (to be implemented by derived classes)
  virtual double getArea() const = 0;
};

// Derived class Circle inheriting from Shape
class Circle : public Shape
{
  Point center;                        // Center of the circle
  double radius;                       // Radius of the circle
  static constexpr double PI{3.14159}; // Constant for the value of PI

public:
  // Constructor to initialize Circle with center, radius, and name
  Circle(int x, int y, double _radius, string name) : Shape{"Circle " + name}, center{x, y}, radius{_radius}
  {
    // Constructor to initialize Circle with center, radius, and name
  }

  // Function to calculate the area of the circle
  double getArea() const override
  {
    return (PI * radius * radius);
  }

  // Overloaded equality operator to compare two circles
  bool operator==(const Circle &circle)
  {
    return ((radius == circle.radius) && (center == circle.center));
  }
};

// Derived class Square inheriting from Shape
class Square : public Shape
{
  double length; // Length of the square

public:
  // Constructor to initialize Square with length and name
  Square(double _length, string name) : Shape{"Square " + name}, length{_length}
  {
    // Constructor to initialize Square with length and name
  }

  // Function to calculate the area of the square
  double getArea() const override
  {
    return (length * length);
  }
};

// Function to print the area of a shape
void printArea(const Shape &shape)
{
  cout << shape.getName() << " Area: " << shape.getArea() << endl;
}

// Main function
int main()
{
  // Example usage of Circle and Square classes
  Circle a{0, 0, 10.0, "A"};
  printArea(a);

  Square b{10.0, "B"};
  printArea(b);

  Circle c{0, 1, 10, "C"};
  printArea(c);

  // Comparison of two circles based on equality operator
  cout << a.getName() << " is " << ((a == c) ? "" : "not ") << "equal to " << c.getName() << endl;

  return 0;
}