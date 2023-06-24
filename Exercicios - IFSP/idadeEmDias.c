#include <stdio.h>

int idadeEmDias(int anos, int meses, int dias){
	
	if(anos < 0)
		return -1;
	
	if(meses > 12 || meses < 0)
		return -1;
	
	if(dias > 30 || dias < 0)
		return -1;
	
	int anos_em_dias, meses_em_dias;
	
	anos_em_dias = anos * 365;
	meses_em_dias = meses * 30;
	
	return anos_em_dias + meses_em_dias + dias;

}

