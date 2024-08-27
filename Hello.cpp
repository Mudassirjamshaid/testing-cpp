#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

using namespace std;



int main()
{
    vector<int> numbers;
    
    try{
        if (numbers.empty())
        {
            cout << "Your vector is empty you need to enter some data in your vector : " << endl;
        }
        else {
            throw(numbers);
        }
    }
    catch(int number) {
        cout << "Your Vector is not Empty it cantain some value : " << endl;
    }

    numbers.push_back(13);
    numbers.push_back(12);

    for (int number : numbers )
    {
        cout << number << " " << endl;
    }

    cout << "capisty : " << numbers.capacity() << endl;
    cout << numbers.size() << " bytes" << endl;
    
    return 0;
}