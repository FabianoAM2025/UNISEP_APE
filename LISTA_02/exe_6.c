//6) Mostre todos os números ímpares de 1 até 20.
#include <stdio.h>

int main(){

	int i=1;

	for(int i=1;i<=20;i++){

		if(i% 2== 1){
			printf("%i \n",i);
		}
	}
   return 0;
}
