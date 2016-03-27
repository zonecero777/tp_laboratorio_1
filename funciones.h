#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
//Prototipos de las Funciones
double Suma(double x, double y);
double Resta(double x, double y);
double Multiplicacion(double x, double y);
double Division(double x, double y);
double Factoreo(double x);

//Desarrollo de las Funciones
double Suma(double x, double y)
{
    double suma;

    suma = x + y;

    return(suma);
}

double Resta(double x, double y)
{
    double resta;

    resta = x - y;

    return(resta);
}

double Multiplicacion(double x, double y)
{
    double producto;

    producto = x * y;

    return(producto);
}

double Division(double x, double y)
{
    double division;

    division = x / y;

    return(division);
}

double Factoreo(double x)
{
    double resp;
    if(x == 1)
        return(1);

    resp = x*Factoreo(x-1);

    return(resp);
}

#endif // FUNCIONES_H_INCLUDED
