#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>
using namespace std;

class Hello
{
private:
    /* data */
public:

    void getInfo() {
        static int x = 0;
        cout << "X  : " << x << endl;
        x++;

    }
};

int main()
{
    Hello s;
    s.getInfo();
    s.getInfo();
    s.getInfo();    
    return 0;
}