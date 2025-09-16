#include <stdio.h>

int main() {
	int N;
	printf("How many pizzas do you want (1,2 or 3)?\n");
	scanf("%d",&N);
	switch(N){
		case 1:
			printf("You have ordered 1 pizza for $8\n");
			break;
		case 2:
			printf("You have ordered 2 pizza for $16\n");
			break;
		case 3: 
		    printf("You have ordered 3 pizza for $32\n");
		    break;
		default:
		    printf("choose among 1-3");
	}
	

    return 0;
}
