#include <stdio.h>
#include <math.h>
#include "func_vetores.h"

#define nl printf("\n");
#define mi exibir_vint(vint, 10);
#define mf exibir_vfloat(vfloat, 5);
#define md exibir_vdouble(vdouble, 3);

int main(){
	
    int vint[10] = {20, 4, 6, 16, 10, 12, 14, 8, 18, 2};
    float vfloat[5] = {0.75, 0.5, 0.25, 1.3, 1.25};
    double vdouble[3] = {498.7001, 7.8940, 98.47002};
	
	exibir_vint(vint, 10);
	nl
	exibir_vfloat(vfloat, 5);
	nl
	exibir_vdouble(vdouble, 3);
	nl
	nl
	
	//funções exibir confere
	/*
	ordenar_vint(vint, 10);
	mi
	nl
	ordenar_vfloat(vfloat, 5);
	mf
	nl
	ordenar_vdouble(vdouble, 3);
	md
	nl
	*/
	//funções ordenar confere
	
	int vint2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	float vfloat2[5] = {1.0, 2.0, 3.5, 4.9, 5.9995};
	double vdouble2[3] = {90.789545, 1016.555589, 1024.51225612864};
	
	ordenar_subordinado_vint(vint, vint2, 10);
	mi
	nl
	exibir_vint(vint2, 10);
	nl
	
	ordenar_subordinado_vfloat(vfloat, vfloat2, 5);
	mf
	nl
	exibir_vfloat(vfloat2, 5);
	nl
	
	ordenar_subordinado_vdouble(vdouble, vdouble2, 3);
	md
	nl
	exibir_vdouble(vdouble2, 3);
	nl
	
	//funções ordenar subordinado confere
	
	printf("%d", busca_maior_vint(vint, 0, 10));
	nl
	printf("%f", busca_maior_vfloat(vfloat, 0, 5));
	nl
	printf("%g", busca_maior_vdouble(vdouble, 0, 3));
	nl
	nl
	
	//funções maior confere
	
	printf("%d", pertence_vint(vint, 10, 3));
	nl
	printf("%d", pertence_vint(vint, 10, 8));
	nl
	nl
	printf("%d", pertence_vfloat(vfloat, 5, 0.75));
	nl
	printf("%d", pertence_vfloat(vfloat, 5, 3));
	nl
	nl
	printf("%d", pertence_vdouble(vdouble, 3, 3));
	nl
	printf("%d", pertence_vdouble(vdouble, 3, 98.47002));
	nl
	nl
	
	//funções pertence confere
	
	printf("%d", busca_bin_vint(vint, 10, 20));
	nl
	printf("%d", busca_bin_vfloat(vfloat, 5, 1.3));
	nl
	printf("%d", busca_bin_vdouble(vdouble, 3, 498.7001));
	
	//funções busca binária confere
	
	return 0;
}