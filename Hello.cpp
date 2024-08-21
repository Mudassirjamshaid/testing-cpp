#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

class EqulateralTriangle {
private:
    float a;
    float circumferance;
    float area;
public: 
    
    void setA(float length) {
     a = length;
     circumferance = a*3;
     area = (1.73 * a * a) / 4; 

    }
    // friend void print(EqulateralTriangle);
    friend class HomeWork;
};

class HomeWork {
    public:
 void print(EqulateralTriangle et) {
    cout << "circumference : " << et.circumferance << endl;
    cout << "area : " << et.area << endl;
 }

};


int main()
{
    EqulateralTriangle et;
    et.setA(3);
    HomeWork h;
    h.print(et);
    return 0;
}