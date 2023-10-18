#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
int posi[6][5]={{0},{0}},i=0,j=0, fila=100,valor=0,columna=0;	
	

while(fila!=0){
printf("ingrese la fila:\n");	
scanf("%d",&fila);	

printf("ingrese la columna:\n");	
scanf("%d",&columna);	


printf("ingrese el valor:\n");	
scanf("%d",&valor);	

posi[fila][columna]=valor;

}


for(i=0;i<6;i++){
	
printf("el valor de la fila %d es:\n",i);		
for(j=0;j<5;j++){	
	
printf("%d,",posi[i][j]);		
}

printf("\n");		
}



for(j=0;j<5;j++){
	
	printf("el valor de la columna %d es:\n",j);		
	for(i=0;i<6;i++){	
		
		printf("%d\n",posi[i][j]);		
	}
	
	
}










	return 0;
}

