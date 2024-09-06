#include <iostream>
#include <thread>
using namespace std;

void driverCar(string driverName) {
  cout << driverName << "is Driving " << endl;
  this_thread::sleep_for(chrono::seconds(2));
  cout << driverName << "is done driving " << endl;
}

int main()
{
  thread t1(driverCar, "oggy");
  thread t2(driverCar, "jack");

  t1.join();
  t2.join();
  return 0;
}