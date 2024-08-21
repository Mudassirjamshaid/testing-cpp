#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

class Rectangle
{
private:
    /* data */
public:
    Rectangle(/* args */);
    ~Rectangle();
    float dimenshion;
    
     
     // Pure Virtual Function
    virtual float calculateArea() = 0;
};

Rectangle::Rectangle(/* args */)
{
}

Rectangle::~Rectangle()
{
}

class Square : public Rectangle
{
private:
    /* data */
public:
    Square(/* args */);
    ~Square();
     
     void getDimenshion() {
        cin >> dimenshion;
     }

    float calculateArea() {
        return dimenshion * dimenshion;
    }
};

Square::Square(/* args */)
{
}

Square::~Square()
{
}

class Triangle : public Square
{
private:
    /* data */
public:
    Triangle(/* args */);
    ~Triangle();

    float calculateArea() {
        return 3.14 * dimenshion * dimenshion;
    }
};

Triangle::Triangle(/* args */)
{
}

Triangle::~Triangle()
{
}




int main()
{
    Square square;
    Triangle tri;
     cout << "Enter Your Dimenshiion : ";
    square.dimenshion;
    cout << square.calculateArea();

    return 0;
}
