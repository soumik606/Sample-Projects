#include<stdio.h>
#include<stdlib.h>

int main(int c, char *v[]){
	int v1,v2;
	if(c<2){
		printf(" No arguments fed");
		exit(0);
	}
	else{
		v1=atoi(v[1]);
		v2=atoi(v[2]);
	}
	int a[v1][v2],at[v2][v1],i=0,j=0;
	printf("Enter the matrix:\n");
	for(i=0;i<v1;i++){
		for(j=0;j<v2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<v1;i++){
		for(j=0;j<v2;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of the matrix be: \n");
	for(i=0;i<v1;i++){
		for(j=0;j<v2;j++){
			at[j][i]=a[i][j];
		}
	}
	for(i=0;i<v2;i++){
		for(j=0;j<v1;j++){
			printf("%d",at[i][j]);
		}
		printf("\n");
	}
}
