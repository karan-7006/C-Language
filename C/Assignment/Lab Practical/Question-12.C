#include<stdio.h>
#include<conio.h>

struct student{
	char name[30];
	int roll;
	float marks;
	};

void main(){
	clrscr();
	struct student s[3];
	int i;

	for(i=0; i<3; i++)
	{
		printf("Enter details of student %d:\n",i+1);

		printf("Name: ");
		scanf("%s", s[i].name);
		fflush(stdin);

		printf("Roll Number: ");
		scanf("%d",&s[i].roll);
		fflush(stdin);

		printf("Marks: ");
		scanf("%f", &s[i].marks);
		fflush(stdin);
	}

	printf("\n--- Student Details ---\n");
	for(i=0; i<3; i++){
		printf("\nStudent %d\n",i+1);
		printf("Name: %s\n", s[i].roll);
		printf("Marks: %.2f\n",s[i].marks);
		}

		getch();
}