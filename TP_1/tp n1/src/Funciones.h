#include "inputs.h"



/// \fnMenuCalculadora()
/// \brief la funcion sirve para validar el numeroo que ingreso en el menu
/// \param ..
/// \return retorna un numero
int MenuCalculadora(void);


/// \fn CalculoDeseado()
/// \brief la funcion sirve para realizar los calculos del menu
/// \param mensaje
/// \return no retorna
void CalculoDeseado(char mensaje[]);


/// \fn Debito()
/// \brief Esta funcion hace un descuento
/// \param num
/// \return retorna un  double
double Debito(double num);



/// \fn credito()
/// \brief Esta funcion hace un interes
/// \param num
/// \return retorna un  double
double credito(double num);



/// \fn criptomoneda()
/// \brief la funcion para calcular el costo de  pesos a cripomoneda
/// \param num
/// \return retorna un  double

double criptomoneda (double num);

/// \fn Unitario()
/// \brief Calcula el valor unitario
/// \param num y km
/// \return retorna un double

double Unitario (double num, double km);





/// \fn IngresarFlotante()
/// \brief la funcion sirve para ingresar un double
/// \param mensaje que se imprime en consola
/// \return retorna un  double

double IngresarFlotante(char mensaje[]);




/// \fn MenuOpciones()
/// \brief la funcion sirve mostrar el menu
/// \param double km  double aerolinea double latam
/// \return no retorna nada

void MenuOpciones (double km,double aerolinea,double latam);


/// \fn CalcularAerolinias()
/// \brief la funcion sirve para hacer los calculos de las aerolinias
/// \param double km double aerolinea
/// \return no retorna nada
void CalcularAerolinias (double aerolinea, double kilometro);

/// \fn Diferencia()
/// \brief la funcion sirve mostrar el menu
/// \param un double num double num2
/// \return no retorna nada
double Diferencia (double num, double num2);

/// \fn CalcularLatam()
/// \brief la funcion sirve mostrar el menu
/// \param un doubleLatam double kilometro
/// \return no retorna nada
void CalcularLatam(double Latam, double kilometro);


