#include "Funciones.h"
#include "inputs.h"
#include <stdio.h>

void CalculoDeseado(char mensaje[]){
	int numeroIngresado;

	double kilometro=0;
	double latam = 0;
	int flag = 0;

	double aerolinea = 0;
	int opcionAeorilineas;
do{
	MenuOpciones (kilometro,aerolinea,latam);
	numeroIngresado = MenuCalculadora();


	switch (numeroIngresado) {
		case 1:
			flag= 0;

			if(kilometro == 7090){
					kilometro = 0;
				}

				if(latam == 159339){
					latam = 0;
				}

				if(aerolinea == 162965){
					aerolinea = 0;
				}

			getNumeroFloat(&kilometro, " \n Ingrese los Kilometros :");


		break;

		case 2:
			flag= 0;

			do{
				if(kilometro == 7090){
					kilometro = 0;
					}
				if(latam == 159339){
					latam = 0;
					}
				if(aerolinea == 162965){
					aerolinea = 0;
				}

				puts("\n****************************");
				puts("1- Precio vuelo Aerolíneas");
				puts("2- Precio vuelo Latam");
				puts("3- Quiere Salir");
				puts("****************************");

				getInt(&opcionAeorilineas);

				switch(opcionAeorilineas){


				case 1:
					getNumeroFloat(&aerolinea, "Precio vuelo Aerolíneas:");
					break;

				case 2:
					getNumeroFloat(&latam, "Precio vuelo Latam:");
				break;

				case 3:
					puts("adios ");
					break;

				}

			}while(opcionAeorilineas<1 || opcionAeorilineas>3 );


		break;

		case 3:
			if(kilometro == 7090){
					kilometro = 0;
				}

				if(latam == 159339){
					latam = 0;
				}

				if(aerolinea == 162965){
					aerolinea = 0;
				}
				flag= 1;
				puts(" ****************************************************************** ");
				puts(" |a) Tarjeta de débito (descuento 10%)                             | ");
				puts(" |b) Tarjeta de crédito (interés 25%)                              | ");
				puts(" |c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)                 | ");
				puts(" |d)precio por km (precio unitario)                       | ");
				puts(" |e) diferencia de precio ingresada (Latam - Aerolíneas)  ");
				puts(" ******************************************************************");
				break;

		case 4:
			if(kilometro == 7090){
					kilometro = 0;
				}

				if(latam == 159339){
					latam = 0;
				}

				if(aerolinea == 162965){
					aerolinea = 0;
				}
			if(flag == 0 ){
				puts("\n\n **no se calcularon los datos** ");
			}else {
				if(aerolinea>0){
				puts(" ***********************************************************");

					CalcularAerolinias (aerolinea, kilometro);

				}
				if(latam>0){
				puts(" ************************************************************");

					CalcularLatam(latam, kilometro);

				puts(" ************************************************************");
				}

				if(aerolinea>0 || latam>0){

					printf("La diferencia de precio es de %f", Diferencia (aerolinea, latam));
				}
			}

		break;

		case 5:
			printf(" **********************************************************\n ");
			aerolinea = 162965;
			latam = 159339;
			kilometro = 7090;

			CalcularAerolinias (aerolinea, kilometro);

			puts(" ************************************************************");

			CalcularLatam(latam, kilometro);

			printf(" ********************************************************* ");

			printf("\n La diferencia de precio es de %2.lf", Diferencia (aerolinea, latam));

		break;

		case 6:

			puts("Adios ");

		break;

	}

	}while(numeroIngresado!=6);

}


