/*
 * CalculosEchos.c
 *
 *  Created on: 12 abr. 2022
 *      Author: Matias
 */
#include "Funciones.h"

void CalcularAerolinias (double aerolinea, double kilometro){
	printf("Aerolineas Argentinas %.2lf \n",aerolinea);
	printf("Tarjeta de débito  %.2lf \n",Debito(aerolinea));
	printf("Tarjeta de crédito %.2lf \n",credito(aerolinea));
	printf("Bitcoin            %lf \n",criptomoneda (aerolinea));
	printf("precio Unitario      %.2lf \n",Unitario (aerolinea, kilometro));


 }

void CalcularLatam(double Latam, double kilometro){
	printf("Latam  %.2lf \n",Latam);
	printf("Tarjeta de débito  %.2lf \n",Debito(Latam));
	printf("Tarjeta de crédito %.2lf \n",credito(Latam));
	printf("Bitcoin            %lf \n",criptomoneda (Latam));
	printf("precio Unitario      %.2lf \n",Unitario (Latam, kilometro));

 }
