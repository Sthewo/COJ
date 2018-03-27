//1005RentYourAirplaneAndMakeMoney.cpp

#include <iostream>

struct Oferta{
	 int horaInicial;
	 int horaFinal;
	 int beneficio;
};

int itinerario( Oferta, int, int );

int main(){

	Oferta oferta[10000];

	int i = 0;
	while( oferta[i].horaInicial && oferta[i].horaFinal && oferta[i].beneficio ){

		std::cin >> oferta[i].horaInicial >> oferta[i].horaFinal >> oferta[i].beneficio;

		++i;
	}

    int MAX_LENGHT = i;

	int Beneficio = 0;
	int BeneficioNuevo = 0;

	for(int j = 0; j < MAX_LENGHT; ++j){
		BeneficioNuevo = itinerario ( oferta[i],  0, MAX_LENGHT);
		if( Beneficio < BeneficioNuevo ){
			Beneficio = Beneficio;
		}
		std::cout << Beneficio << "\n";
	}

	return 0;
}

int itinerario( Oferta &oferta, int beneficioTotal, int MAX_LENGHT ){

	beneficioTotal = oferta.beneficio;

	int beneficioNuevo = 0;

	for( int i = oferta.horaFinal; i < MAX_LENGHT; ++i){


		beneficioNuevo = itinerario( oferta[i].horaFinal, beneficioTotal + oferta[i].beneficio);

		if( beneficioTotal < beneficioNuevo ){
			beneficioTotal = beneficioNuevo;
		}
	}

	return beneficioTotal;
}
