/*
 	T = numero de pruebas
	NG = # Godzilla
	NM = # MechaGodzila
*/

#include <iostream>
#include <string>

inline int numeroIntentos();
inline void introducirPelea( int *godzillaTroops, int *mechaTroops, int NG, int NM );
inline void ordenarContrincantes( int *godzillaTroops, int *mechaTroops, int NG, int NM );
inline std::string pelear( int *godzillaTroops, int *mechaTroops );
inline void imprimirGanador( std::string );

int main(){

	int Intentos = numeroIntentos();
	std::cout << "\n";

	std::string *resultados = new std::string[Intentos];
	for( int i = 0; i < Intentos; i++){

		int NG = 0;
		int NM = 0;
		
		std::cin >> NG >> NM;
		
		int *godzillaTroops = new int[NG]();
		int *mechaTroops = new int[NM]();

		introducirPelea( godzillaTroops, mechaTroops, NG, NM );

		ordenarContrincantes( godzillaTroops, mechaTroops, NG, NM );

		resultados[i] = pelear( godzillaTroops, mechaTroops );


		delete[] godzillaTroops;
		delete[] mechaTroops;

 		std::cout << "\n";
	}

	for( int i = 0; i < Intentos; i++){
		std::string ganador = resultados[i];
		imprimirGanador( ganador );
	}

	delete[] resultados;
	return 0;
}




int numeroIntentos(){
	int numeroIntentos;
	std::cin >> numeroIntentos;
	return numeroIntentos;
}

void introducirPelea( int *godzillaTroops, int *mechaTroops, int NG, int NM ){

	for( int i = 0; i < NG; i++ ){
		std::cin >> godzillaTroops[i];
	}

	for( int i = 0; i < NM; i++ ){
		std::cin >> mechaTroops[i];
	}

}


void ordenarContrincantes( int *godzillaTroops, int *mechaTroops, int NG, int NM ){
	for( int i = NG - 1; i > 0; i--){
		if( godzillaTroops[i-1] < godzillaTroops[i] )
			std::swap(godzillaTroops[i], godzillaTroops[i-1]);
	}

	for( int i = NM - 1; i > 0; i--){
		if( mechaTroops[i-1] < mechaTroops[i])
			std::swap(mechaTroops[i], mechaTroops[i-1]);
	}
}

std::string pelear( int *godzillaTroops, int *mechaTroops ){

	if( mechaTroops[0] > godzillaTroops[0] ){
		return "MechaGodzilla";

	}else if( mechaTroops[0] < godzillaTroops[0] ){
		return "Godzilla";

	}else if( mechaTroops[0] == godzillaTroops[0] ){
		return "Godzilla";

	}

}

void imprimirGanador( std::string ganador ){

	std::cout << ganador << "\n";
}