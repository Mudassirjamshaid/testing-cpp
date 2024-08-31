#include <iostream>
#include <thread>

using namespace std;

void function1()
{
    for (int i = 0; i < 200; i++)
    {
        cout << "*";
    }
}

void function2()
{
    for (int i = 0; i < 200; i++)
    {
        cout << "+";
    }
}

int main()
{
    // Create two threads and assign them to the respective functions
    thread worker1(function1);
    thread worker2(function2);

    // Join the threads to ensure they complete before exiting
    worker1.join();
    worker2.join();

    // Wait for user input before exiting
    cin.get();
    return 0;
}
