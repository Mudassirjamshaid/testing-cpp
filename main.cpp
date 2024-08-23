#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

template <typename T>
class CalculateValue {
  public:

  T add(T a, T b) {
    return a + b;
  }
  
  T substract(T a, T b) {
    return a - b;
  }
  
  T multiply(T a, T b) {
    return a * b;
  }

  
  T divides(T a, T b) {
    if (b == 0)
    {
      cout << "Zero Cannot be Allowed To Divide Valve ";
    }
    
    return a / b;
  }
};

int main()
{
  CalculateValue<int> intvalue;
  intvalue.add(5, 6);
  intvalue.substract(5, 9);

  CalculateValue<float> floatvalue;
  floatvalue.multiply(7, 8);
  floatvalue.divides(6, 9);
  return 0;
}