//1102PuedesDecir11
#include <iostream>
#include <string>

int main(){
	
	
	int numberOfCases = 0;
	long numero;
	long listaNumeros[1000];
	//leer valores, hasta que se introduzca un cero.
	while(true){
    
		std::cin >> numero;
		
        if(numero == 0) break;
        
		listaNumeros[numberOfCases] = numero;

		++numberOfCases;
    
		numero = 0;

	}
    
	for( int j = 0; j < numberOfCases; j++){

		if (listaNumeros[j] % 11 == 0){
			std::cout << listaNumeros[j] <<" is a multiple of 11.\n";
		}else{
			std::cout << listaNumeros[j] <<" is not a multiple of 11.\n";
		}
		
	}
	
	return 0;


}

