#include <iostream>

using namespace std;

enum eyeColor
{
  brown,
  blue,
  dark,
  Green,
  Gray,
  other
};

int main()
{
  eyeColor myEyeColor = brown;
  cout << myEyeColor << endl;
  return 0;
}