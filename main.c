#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	


	
	int choice,i,count,loops_times;
	char choose_task;


	
	do{
		
		printf("\nEnter the task no. you want to open:\n");
		printf("0.Table Of 9\n1.Numbers from 1-25\n2.Even Numbers (0-30)\n3.Odd Numbers (1-50)\n4.ASCII Of All Uppercase Alphabets\n5.Counter Variable\n6.Loops based on User Input\n7.Descending Order from 100 till 1\n8.Descending Order with decrement of 3\n");
		printf("\nEnter Task no: ");
		scanf("%d",&choice)	;
		
		
		switch (choice){
			case 0:
				printf("Table Of 9\n");
				for (i=1; i<11;i++){
					
					printf("9 x %d = %d\n",i,9*i);
					
					
						
			}
			break;
		
	
					
			case 1:
				printf("Numbers From 1-25\n");
				for (i=1; i<=25;i++){
					
					printf("%d\n",i);
					
				}
				break;
			case 2:
				printf("Even Numbers (0-30)\n");
				for (i=0; i<=30;i= i+2){
					
					printf("%d\n",i);
					
				}
				break;
			case 3:
				printf("Odd Numbers (1-50)\n");
				for (i=1; i<=50;i= i+2){
					
					printf("%d\n",i);
					
				}
				break;
			case 4:
				
				printf("ASCII Of All UpperCase Characters (A-Z)\n");
				i='A';
				while ( i<='Z'){
					
					printf("%d\n",i);
					i++;
					
				}
				break;
			case 5:
				count = 0;
				printf("Counter Variable\n");
				i=1;
				while ( i<=5){
					
					printf("%d\n",i);
					i=i+1;
					count++;
				}
				printf("Total number of times loop executed: %d\n",count);
				break;
			case 6:
				
				printf("Loops based on User Input\n");
				printf("Enter how many times you want to loop to be executed: ");
				scanf("%d",&loops_times);
				i=1;
				while( i<=loops_times){
					
					printf("%d\n",i);
					i=i+1;
					
				}
				
				break;
			case 7:
				
				i = 100;
				printf("Descending Order (100-01)\n");
				do{
					
					
					printf("%d\n",i);
					i= i-1;
					
				}while(i>=1 );
				
				break;
			case 8:
				
				i = 100;
				printf("Descending Order with decrement of 3\n");
				do{
					
					
					printf("%d\n",i);
					i= i-3;
					
				}while(i>=1 );
				
				break;
			
		}
		printf("Do you want to choose another task? (1-True/ 0-False)");
		scanf("%d",&choose_task);
						
		if (choose_task == 0 ){
			printf("ThankYou :)");
			break;}	
	
			
	
	
	
	}while ("true");
			
				

	

return 0;

}

