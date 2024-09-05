#pragma once
#include<iostream>

void function2();
void function1();
void function1() {
	for (int i = 0; i <= 200; i++) {
		std::cout << "-";
	}
}
void function2() {
	for (int i = 0; i <= 200; i++) {
		std::cout << "+";
	}
}
