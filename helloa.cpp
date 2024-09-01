#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

std::mutex mtx;  // Mutex for synchronizing output

void function1()
{
    for (int i = 0; i < 200; i++)
    {
        std::lock_guard<std::mutex> guard(mtx);  // Lock the mutex
        cout << "+";
    }
}

void function2()
{
    for (int i = 0; i < 200; i++)
    {
        std::lock_guard<std::mutex> guard(mtx);  // Lock the mutex
        cout << "-";
    }
}

int main()
{
    std::thread worker1(function1);
    std::thread worker2(function2);

    // Join the threads to ensure they complete before exiting
    worker1.join();
    worker2.join();

    // Wait for user input before exiting
    //cin.get();
    return 0;
}
