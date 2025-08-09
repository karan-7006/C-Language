#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int i,n;

	printf("\nEnter any Number: ");
	scanf("%d",&n);

	printf("Natural Numbers from 1 to %d:\n",n);
	for(i=0;i<=n;i++){
	printf("%d\n",i);
	}
	getch();
}