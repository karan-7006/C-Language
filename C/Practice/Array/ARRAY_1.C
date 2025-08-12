#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int arr[5];
	int i;

	printf("\nRead and Print Elements of an Array:-\n\n");

	printf("Input 10 elements in the array:\n\n");
	for(i=0;i<5;i++)
	{
		printf("Element %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nElements in array are: ");
	for(i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
	getch();
}