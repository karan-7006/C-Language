#include<stdio.h>
#include<stdio.h>
#include<string.h>

void main(){
	clrscr();
	char str1[50],str2[50];

	printf("\nEnter First String: ");
	gets(str1);

	printf("\nEnter Second String: ");
	gets(str2);

	strcat(str1, str2);

	printf("\nConcatenated String= %s",str1);
	printf("\nLength of Concatenated String= %d", strlen(str1));

	getch();
}