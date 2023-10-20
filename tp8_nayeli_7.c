#include <stdio.h>

void registrarTransaccion(float cuentas[][6], int numeroCuenta, int codigoTransaccion, int monto) {
	if (codigoTransaccion == 1) {
		cuentas[numeroCuenta - 1][1] += monto;
		cuentas[numeroCuenta - 1][5] += monto;
	} else if (codigoTransaccion == 2) {
		cuentas[numeroCuenta - 1][2] += monto;
		cuentas[numeroCuenta - 1][5] -= monto;
	} else if (codigoTransaccion == 3) {
		cuentas[numeroCuenta - 1][3] += monto;
		cuentas[numeroCuenta - 1][5] -= monto;
	} else if (codigoTransaccion == 4) {
		cuentas[numeroCuenta - 1][4] += monto;
		cuentas[numeroCuenta - 1][5] += monto;
	}
}

int main(int argc, char *argv[]) {
	float cuentas[100][6] = {0};
	int i, j, numeroCuenta, codigoTransaccion, monto;
	
	printf("Bienvenido al sistema de gestión de cuentas bancarias.\n");
	
	do {
		printf("Ingrese número de cuenta del cliente (0 para salir): ");
		scanf("%d", &numeroCuenta);
		
		if (numeroCuenta == 0) {
			break;
		}
		
		printf("Ingrese código de transacción (1: Depósito, 2: Retiro, 3: Comisiones Deducidas, 4: Intereses Acreditados): ");
		scanf("%d", &codigoTransaccion);
		
		printf("Ingrese Monto: ");
		scanf("%d", &monto);
		
		registrarTransaccion(cuentas, numeroCuenta, codigoTransaccion, monto);
	} while (1);
	
	printf("\nResumen de cuentas:\n");
	printf("Nro CUENTA    DEPOSITOS         RETIROS       COMISIONES        INTERESES       SALDO\n");
	for(i=0;i<100;i++){
		cuentas[i][0]=i+1;
	}
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 6; j++) {
			printf("%.2f\t\t", cuentas[i][j]);
		}
		printf("\n");
	}
	
	
	int indices[3] = {-1, -1, -1}; // Inicializar los índices con valores inválidos
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 3; j++) {
			if (indices[j] == -1 || cuentas[i][1] > cuentas[indices[j]][1]) {
				
				for (int k = 2; k > j; k--) {
					indices[k] = indices[k - 1];
				}
				indices[j] = i;
				break;
			}
		}
	}
	
	printf("\nTres primeras cuentas con el mayor depósito: \n");
	for (i = 0; i < 3; i++) {
		if (indices[i] != -1) {
			printf("Nro Cuenta %.0f -- Depósito %.2f\n", cuentas[indices[i]][0], cuentas[indices[i]][1]);
		}
	}
	
	return 0;
}
