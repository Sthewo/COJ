//1483TareaGeometricaI.cpp

#include <iostream>

int areaRectangle( int, int );
int areaSquare( int );

int main(){

	std::string figure = " ";
	int ladoA = 0;
	int ladoB = 0;
	int area = 0;

	std::cin >> figure;

	if     ( figure == "rectangle"){
		std::cin >> ladoA >> lado B;
		area = areaRectangle(ladoA, ladoB);
	}
	else if(figure == "square"){
		std::cin >> ladoA;
		area = areaSquare(ladoA);
	}

	std::cout << area;

	return 0;
}

int areaSquare( int f_ladoA, int f_ladoB ){

	return f_ladoA*f_ladoB;
}
int areaSquare( int f_ladoA ){

	return f_ladoA*f_ladoA;
}