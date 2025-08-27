#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();
	FILE *file;
	char filename[]="main.txt";
	char text[]= "Hello, How are You?";
	char ch;

	file=fopen(filename,"w");
	if(file==NULL){
		printf("\nError opening file for writting.");
		getch();
		return;
	}
	fprintf(file, "%s",text);
	fclose(file);
	printf("\nString written to file sucessfully!");

	file=fopen(filename,"r");
	if(file==NULL){
		printf("\nError opening file for reading.");
		getch();
		return;
	}

	printf("\nContents of the files:");
	while((ch=fgetc(file)) != EOF){
		printf("%c",ch);
	}
	fclose(file);
}