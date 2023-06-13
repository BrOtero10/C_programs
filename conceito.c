#include <stdio.h>

char conceito(float media){
	if(media >= 0 && media <= 10){
	
		if(media < 5)
			return 'D';
		else if(media < 7)
			return 'C';
		else if(media < 9)
			return 'B';
		else
			return 'A';
	}
	
	return ' ';
}