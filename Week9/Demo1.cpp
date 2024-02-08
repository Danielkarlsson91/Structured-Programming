#include<iostream>
#include<cassert>

class Point
{
  int x, y;
public:
  Point(int_x)
  {
    x = _x;
    y = 0;
  }
  Point(int _x, int _y)
  {
    x = _x;
    y = _y;
    std::cout << "Construtor called" << std:: endl;
  }   

  void print()
  {
    std::cout << "(" << x << ", " << y << ")" << std:: endl;
  }
};

int main()
{  
    Point q{100};

    Point p{10, 20};

    p.print();
    

    return 0;
}

