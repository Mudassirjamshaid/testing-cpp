#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class CaculateValue{
public:
   
   T add(T a, T b) {
    return a + b;
   }
   T substract(T a , T b) {
     return a - b;
   }
   T multiply(T a , T b) {
     return a * b;
   }
   T divides(T a , T b) {
    if (b == 0)
    {
        cout << "Error Your B is Equal to Zero And it is not afficent Value : ";
    }
    
     return a / b;
   }
};

int main() {
    CaculateValue<int> intValue;
    cout << intValue.add(4, 5) << endl;
    cout << intValue.substract(4, 5) << endl;
    
    CaculateValue<float> floatValue;
    cout << floatValue.multiply(4, 5) << endl;
    cout << floatValue.divides(4, 0) << endl;
    return 0;
}
