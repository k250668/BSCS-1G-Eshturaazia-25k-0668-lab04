#include <stdio.h>

int main() {
	int Total;
    int N;
    int N2;
    int time;
    printf("How many pizzas do you want (1,2 or 3)?\n");
	scanf("%d",&N);
	switch(N){
		case 1:
			Total=8;
			break;
		case 2:
			Total=16;
			break;
		case 3: 
		    Total=21;
		    break;
		default:
		    printf("choose among 1-3\n");
	}
	
    
	printf("Now choose crust type:\n");
	printf("1:thin crust\n");
	printf("2:Regular crust\n");
	printf("3:stuffed crust\n");
    scanf("%d", &N2);
    switch (N2) { 
    case 1:
    	Total += 1;
    	break;
    case 2:
    	Total+= 0;
    	break;
    case 3:
    	Total+= 2;
    	break;
    default:
         printf("choose from 1-3\n");
}
 char choice;
   printf("Do you want extra cheese (Y/N): ");
    scanf(" %c", &choice);  

    if (choice == 'Y' || choice == 'y') {
        Total += 2;   
    }
    else if (choice == 'N' || choice == 'n') {
        Total += 0;   
    }
    else {
        printf("Only Y/N acceptable \n");
    }
 printf("Whats the current time (0-23) : ");
scanf("%d",&time);
if (time>=11 && time<=14)
{
	Total = 0.8*Total;
}
char StudId;
 printf("Do you have student Id (Y/N): ");
 scanf(" %c", &StudId);
    if (StudId == 'Y' || StudId == 'y') {
        Total -= 2;   
    }
    else if (StudId == 'N' || StudId == 'n') {
        Total += 0;   
    }
    else {
        printf("Only Y/N acceptable \n");
    }
    
    int delivery;
	printf("Last question!\n");
	printf("Do you want delivery or pickup? Choose from options.\n");
	printf("1:Delivery\n");
	printf("2:Pickup\n");
	scanf("%d",&delivery);
	if (delivery == 1) {
		Total+=3;
	}
    printf("Your total price is =$%d \n",Total);
    if ( N ==3 && N2 == 3 ) {
    	printf("and you get free garlic bread");
	}
    
    return 0;
}
