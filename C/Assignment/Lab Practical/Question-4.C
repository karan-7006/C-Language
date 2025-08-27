#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int a,b;

	printf("Enter two integers Value: ");
	scanf("%d",&a,&b);

	printf("\n--- Arithmethic Operations ---\n");
	printf("a+b = %d\n", a+b);
	printf("a-b = %d\n", a-b);
	printf("a*b = %d\n", a*b);

	if(b!=0)
	{
		printf("a/b= Division by Zero not possible\n");
	}

	printf("\n--- Rational Operator ---\n");
	printf("a==b: %d\n", a==b);
	printf("a!=b: %d\n", a!=b);
	printf("a>b: %d\n", a>b);
	printf("a<b: %d\n", a<b);
	printf("a>=b: %d\n", a>=b);
	printf("a<=b: %d\n", a<=b);

	printf("\n--- Logical Operations ---\n");
	printf("(a && b): %d\n", (a && b));
	printf("(a || b): %d\n", (a || b));
	printf("!(a) : %d\n", |a);
	printf("!(b) : %d\n", |b);

	getch();


}