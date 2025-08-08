#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	int phy,chem,bio,math,comp;
	float per;

	printf("\nEnter Five Subjects Marks: ");
	scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
	per=(phy+chem+bio+math+comp)/5;

	printf("\nPercentage=%.2f\n",per);

	if(per>=90)
	{
		printf("\nGrade A");
	}
	else if(per>=80)
	{
		printf("\nGrade B");
	}
	else if(per<=70)
	{
		printf("\nGrade C");
	}
	else if(per<=60)
	{
		printf("\nGrade D");
	}
	else if(per<=50)
	{
		printf("\nGrade E");
	}
	else{
		printf("\nGrade F");
	}
	getch();
}