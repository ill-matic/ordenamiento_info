#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a[99];
	int i=0,aux =0, pos = 0,cant=0;
	printf("\t----PROGRAMA DE ORDENAMIENTO DE PESOS----\n\n");
	printf("Ingrese la cantidad de peleadores:\n");
	scanf("%d",&cant);
	printf("Ingrese el peso en kilogramos de los peleadores\n");
	for(i=0; i<cant ; i++){
		scanf("\t%d",&a[i]);
	}
	for (i=0;i<cant;i++){
		aux = a[i];
		pos = i;
		while((pos>0)&&(aux < a[pos-1])){
			a[pos]=a[pos-1];
			pos--;
		}
		a[pos]=aux;
	}
	printf("Pesajes en orden acendente:\n");
	for(i=0;i<cant;i++){
		printf("\t%d",a[i]);
	}
	printf("\nPesajes en orden decendente:\n");
	for(i=cant-1;i>=0;i--){
		printf("\t%d",a[i]);
	}
	return 0;
}

