#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int a[5],i;

	printf("\nEnter array Elements: \n");
	for(i=0; i<5; i++){
	printf("\nEnter %d elements: ",i);
	scanf("%d",&a[i]);
	}

	printf("\nArray ELements Are:-\n");
	for(i=0;i<5;i++){
	printf("\nA[%d]=%d",i,a[i]);
	}

	getch();

}