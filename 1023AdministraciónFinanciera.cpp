//1023 - Administración Financiera

#include <iostream>
#include <stdio.h>
#include <string>
#include <array>

//declaración de las funciones
//captura el valor introducido por teclado
inline double leerValores(); 
//Calcula la media de los valores del array mes
inline double calcularMedia( float *mes ); 
//Imprime el valor con signo de dolar delante y 2 decimales
inline void imprimirResultado( double media ); 


int main(){

	float meses[12];

	//recogemos los valores de los 12 meses y los guardamos en un array
	for( int i = 0; i < 12; i++){

		meses[i] = leerValores();
	}
	/*pasamos el array para poder calcular la media de sus valores 
	  y lo guardamos en una variable para poder imprimirlo después*/
	double media = calcularMedia( meses );

	imprimirResultado( media );

	return 0;
}







double leerValores(){

	double valor = 0.0;
	std::cin >> valor;
	return valor;
}

double calcularMedia( float *mes ){

	double suma = 0.0;
	for( int i = 0; i < 12; i++){
		suma += mes[i];
	}

	return suma / 12;
}

void imprimirResultado( double media){

	std::cout << "$";
	printf("%.2lf \n",media);
}