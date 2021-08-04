#include <stdio.h>
#include <stdlib.h>
int n,con[50][50], visited[50],q[50],r=0,f=0;
void bfs(int v){
	int i,j;
	for(i=0;i<n;i++){
		if(con[v][i] && visited[i]!=1){
			q[r++]=i;
		}
	}
	if(f<r){
		visited[q[f]]=1;
		bfs(q[f++]);
	}


}
int main(int argc, char const *argv[])
{
	if(argc<2){
		printf("No arguments given. Give one argument\n");
		exit(0);
	}
	else{
		n=atoi(argv[1]);
	}
	int i,j,start;
	for(i=0;i<n;i++){
		visited[i]=0;
	}
	printf("Enter the adjacency matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&con[i][j]);
		}
	}
	printf("Enter the starting vertex:\n");
	scanf("%d",&start);
	if(start>=n){
		printf("No such vertex.\n");
		exit(0);
	}
	bfs(start);
	printf("The queue at the end of the algorithm:\n");
	for(i=0;i<n;i++){
		printf("%d",q[i]);
	}
	return 0;
}