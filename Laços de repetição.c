#include <stdio.h>

int main() {
	       //Laços de repetição   usando for
		for(int i=0; i <=5; i++){
        printf("%i \n",i);
    }
    //Laços de repetição   usando while
    int x = 0;
    while(x<3){
		printf("Valor de x:%i\n",x);
        x++;
	   // x = x +1;
    }
	// //Laços de repetição   usando do while    muito usado em menus
		int y=0;
		do{
			printf("Valor de y:\n",y);
			y++;

		}while(y<=4);
}
