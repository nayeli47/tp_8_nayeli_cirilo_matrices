#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {

int posi[3][3]={{0},{0}},h=0,i=0,j=0;
	

for(i=0;i<3;i++){
	
	
	for(j=0;j<3;j++){	
		
		printf("ingrese un valor:\n");	
		scanf("%d",&posi[i][j]);	
	}
	
	printf("\n");		
}
	
for(i=0;i<3;i++){
	for(j=1;j<3;j++){	
		
		printf("%d",posi[i][j]);	
		
		}
	
	
	
	for(j=0;j<1;j++){	
		
		printf("%d",posi[i][j]);	
		
	}
	
	printf("\n");	
		
}
	


	
	
	
	
	
	
	
	
	
	
	return 0;
}

