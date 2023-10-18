#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
int mat[3][3],i,k,l,j,aux;
	


for(i=0;i<3;i++){
	
	for(j=0;j<3;j++){
		
	printf("ingresa valores:\n");	
	scanf("%d",&mat[i][j]);	
		
	}
	
	
}
	
	

for(i=0;i<3;i++){
	
	for(j=0;j<3;j++){
		
		
		for(k=0;k<3;k++){
			
			for(l=0;l<3;l++){
				
			if(mat[i][j]<mat[k][l]){
				
			aux=mat[i][j];	
			mat[i][j]=mat[k][l];	
			mat[k][l]=aux;
			}	
				
			}
			
			
		}	
		
	}
	
	
}	
	
printf("\n");

for(i=0;i<3;i++){
	
	for(j=0;j<3;j++){
		printf("%d\t",mat[i][j]);	
		}
	printf("\n");
	
}	
	
	
	
	
	
	
	
	
	
	return 0;
}

