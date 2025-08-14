#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int i,n;
	printf("\nEnter Starting Value: ");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		printf("%d\n",i);
	}
	getch();
}