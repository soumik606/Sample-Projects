#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int v1,v2,v3;
	if(argc<2){
		printf("No arguments given.\n");
		exit(0);
	}
	else{
		v1=atoi(argv[1]);
		v2=atoi(argv[2]);
		v3=atoi(argv[3]);
	}
	int a[v1][v2],b[v2][v3],c[v1][v3],i,j,sum=0,k;
	printf("Enter the first matrix:\n");
	for(i=0;i<v1;i++){
		for(j=0;j<v2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The first matrix be:\n");
	for(i=0;i<v1;i++){
		for(j=0;j<v2;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the second matrix:\n");
	for(i=0;i<v2;i++){
		for(j=0;j<v3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The second matrix be:\n");
	for(i=0;i<v2;i++){
		for(j=0;j<v3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<v1;i++){
		for(j=0;j<v3;j++){
			for(k=0;k<v2;k++){
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	printf("The product matrix be:\n");
	for(i=0;i<v1;i++){
		for(j=0;j<v3;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}