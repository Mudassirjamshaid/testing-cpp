#include<iostream>
#include <thread>

using namespace std;

void function1() {
	for (int i = 0; i <+ 200; i++)
	{
		cout << "+";
	}
}
void function2() {
	for (int i = 0; i < +200; i++)
	{
		cout << "-";
	}
}
int main() {
	thread worker1(function1);
	thread worker2(function2);
	return 0;
}