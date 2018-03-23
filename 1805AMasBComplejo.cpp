//1805AMasBComplejo.cpp

#include <iostream>

int main(){

	int a, b, r;

	std::cin >> a >> b;

	r = (a+b)+(a-b)+(b+a)+(b-a);

	std::cout << r;

	return 0;

}