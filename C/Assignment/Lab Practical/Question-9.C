#include<stdio.h>
#include<conio.h>

void main(){
	clrscr();

	int arr1D[5];
	int arr2D[3][3];
	int i,j,sum=0;

	printf("\nEnter 5 integers:\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr1D[i]);
	}

	printf("\nYou entered (1D Array):\n");
	for(i=0;i<5;i++){
		printf("%d",arr1D[i]);
	}

	printf("\n\nEnter elements of 3x3 Matrix:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d",&arr2D[i][j]);
			}
		}

	printf("\nThe 3x3 Matrix is:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d",arr2D[i][j]);
			sum=sum+arr2D[i][j];
			}
			printf("\n");
		}
		printf("\nSum of all elements in matrix= %d",sum);

		getch();
}