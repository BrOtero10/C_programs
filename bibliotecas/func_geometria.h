#include <stdio.h>
#include <math.h>

typedef struct{
	double x;
	double y;
	
}Ponto;

typedef struct{
	double a_x;
	double b_y;
	double c;
	
}Reta;

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

double dist_ponto_reta(Reta a, Ponto b){
	double modulo_dividendo, denominador, dist;
	
	modulo_dividendo = (a.a_x * b.x) + (a.b_y * b.y) + a.c;
	
	if(modulo_dividendo < 0)
		modulo_dividendo = -modulo_dividendo;
	
	denominador = sqrt(pow(a.a_x, 2) + pow(a.b_y, 2));
	
	dist = modulo_dividendo / denominador;
	
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

