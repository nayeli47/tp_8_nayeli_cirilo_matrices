#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
int mat[5][5],i=0,j=0;	
	
for(i=0;i<5;i++){
 printf("ingrese el valor de la diagonal principal:\n");	
 scanf("%d",&mat[i][i]);	
 
}	

for(i=0;i<5;i++){
	
for(j=i+1;j<5;j++){
	
  printf("ingrese el valor del triangulo superior:\n");	
 scanf("%d",&mat[i][j]);	
	
	
}
}

for(i=1;i<5;i++){
	
	for(j=0;j<i;j++){
		
		printf("ingrese el valor del triangulo inferior:\n");	
		scanf("%d",&mat[i][j]);	
		
		
		
		
	}
}



for(i=0;i<5;i++){
	printf("\n");	
	for(j=0;j<5;j++){
		printf("%d\t",mat[i][j]);	
	}
}


	return 0;
}

