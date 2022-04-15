#include "Funciones.h"
#define Bitcoin  4606954.55;


double credito(double num){

	double respuesta;
		respuesta = num + ((num/100)*25) ;
		return respuesta;

		}

double Debito(double num){

	double respuesta;
	respuesta = num - ((num/100)*10);
	return respuesta;

}


double criptomoneda (double num){
	double respuesta;

		respuesta = num / Bitcoin;
		return respuesta;
	}


double Diferencia (double num, double num2){
	double respuesta;

		if(num>num2){
		respuesta = num - num2;
		}else{
		respuesta = num2 - num;
		}

		return respuesta;
	}




double Unitario (double num, double km){

	double respuesta;
		respuesta = num / km;
		return respuesta;
}


