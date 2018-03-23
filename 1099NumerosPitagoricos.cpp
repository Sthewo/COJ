//1099NumerosPitagoricos
#include <iostream>
#include <string>

int main(){
	
	struct DataTrio{
		int a;
		int b;
		int c;
	};
		int a;
		int b;
		int c;
	int numberOfCases = 0;
	DataTrio trio[1000];

	//leer valores, hasta que se introduzca un cero.
	while(true){
    
		std::cin >> a >> b >> c;
		
        if(a == 0 && b == 0 && c== 0) break;
        
		trio[numberOfCases].a = a; 
		trio[numberOfCases].b = b; 
		trio[numberOfCases].c = c; 

		++numberOfCases;
    
		a = 0;
		b = 0;
		c = 0;

	}
    
    /*Comprobar si se cumple que la suma de los cuadrados de los
    dos primeros numeros es mayor o igual al cuadrdo del tercero*/
	for( int j = 0; j < numberOfCases; j++){

		if ((trio[j].a*trio[j].a+trio[j].b*trio[j].b) >= (trio[j].c*trio[j].c)){
			std::cout << "right\n";
		}else{
			std::cout << "wrong\n";
		}

	}
	
	return 0;


}