//1566BolasDeCanyon.cpp

#include <iostream>

int main(){

	int numeroDePisos = 0;
	int numeroDePruebas = 0;
	int arrayDeCasos[10000];

	while(true){

		std::cin >> numeroDePisos;

		if(numeroDePisos == 0) break;

		arrayDeCasos[numeroDePruebas] = numeroDePisos;

		++numeroDePruebas;

		arrayDeCasos[numeroDePruebas] = 0;

	}

	int numeroDeBolas = 0;

	for(int j = 0; j < numeroDePruebas; ++j){
		numeroDeBolas = 0;
		
		for(int piso = 1; piso <= arrayDeCasos[j]; ++piso)
			numeroDeBolas += piso*piso;

		std::cout << numeroDeBolas <<"\n";
	}


	return 0;
}