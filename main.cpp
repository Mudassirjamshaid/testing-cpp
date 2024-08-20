#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int height;
    int width;
    char symbol;
    cout << "Enter Height : ";
    cin >> height;
    cout << "Enter Width : ";
    cin >> width;
    cout << "Enter Symbol :";
    cin >> symbol;

    for (int i = 0; i < height; i++)
    {
        for (int i = 0; i < width; i++)
        {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}