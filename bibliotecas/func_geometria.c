#include <stdio.h>
#include <math.h>

typedef struct{
	double x;
	double y;
	
}Ponto;

typedef struct{
	Ponto centro;
	double raio;
	
}Circulo;

double dist_pontos(Ponto a, Ponto b){
	double dist, var_x2, var_y2;
	
	var_x2 = pow((b.x - a.x), 2);
	var_y2 = pow((b.y - a.y), 2);
	
	dist = pow((var_x2 + var_y2), 0.5);
	
	return dist;
}

double circunferencia(double raio){
    double circ = 2 * 3.14159265 * raio;
	return circ;
}

double area_circulo(double raio){
	double area = 3.14159265 * pow(raio, 2);
	return area;
}

double area_regular(double lado, int n){
	
	if(n < 3)
		return -1;
	
	double area, apotema, semiperimetro;
	
	apotema = lado / (2 * tan(3.14159265 / n));
	semiperimetro = (lado * n) / 2;

	area = apotema * semiperimetro;
	
	return area;
}