#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define INPUTS_H_

int getNumero(int* pResultado, char mensaje[]);
int getInt(int* pResultado);
int esNumerica(char* cadena);
int getNumeroConMinyMax(int* pResultado, char mensaje[],int min,int max);

int getNumeroConMin(int* pResultado, char mensaje[],int min);
double getNumeroFloat(double* pResultado, char mensaje[]);
int getFloat(double* pResultado);
int esNumericaFloat(char* cadena);

int esString(char* cadena);
int GetString(char mensaje[],char mensajeError[], char cadena[], int tam);


