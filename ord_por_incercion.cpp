#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	/**cantidad de elementos puede variar**/
	int a[5]{1,2,3,4,5};
	int i=0,aux =0, pos = 0;
	
	for (i=0;i<5;i++){
		aux = a[i];
		pos = i;
		while((pos>0)&&(aux < a[pos-1])){
			a[pos]=a[pos-1];
			pos--;
		}
		a[pos]=aux;
	}
	printf("En orden acendente:\n");
	for(i=0;i<5;i++){
		printf("\t%d",a[i]);
	}
	printf("\nEn orden decendente:\n");
	for(i=4;i>=0;i--){
		printf("\t%d",a[i]);
	}
	return 0;
}

