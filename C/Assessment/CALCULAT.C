#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();

	int choice;
	float num1, num2, result;
	char cont;

		printf("\n***** SIMPLE CALCULATOR ***\n");
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Division\n");
		printf("Enter Your Choice (1-4): ");
		scanf("%d", &choice);
		printf("\n");
		printf("Enter Your First Number: ");
		scanf("%f", &num1);
		printf("Enter Your Second Number: ");
		scanf("%f", &num2);

		switch(choice){

			case 1:
			result = num1 + num2;
			printf("Result = %.2f\n", result);
			break;

			case 2:
			result = num1 - num2;
			printf("Result = %.2f\n", result);
			break;

			case 3:
			result = num1 * num2;
			printf("Result = %.2f\n", result);
			break;

			case 4:
			if(num2 != 0)
			result = num1/num2;
			else{
				printf("Error: Division by Zero\n");
				result = 0;
			}
			printf("Result = %.2f\n",result);
			break;
		default:
			printf("Invalid Choice\n");
		}
		printf("\n");

		printf("Thank You for using the Calculator!");

		getch();
}