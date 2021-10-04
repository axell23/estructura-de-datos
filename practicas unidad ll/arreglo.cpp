#include <iostream>
#include <array>

using namespace std;

const int TAM=10;

void imprimirArreglo(array<int, TAM> &arr, int num_elementos){
	for (int i =0; i< arr.size() && i< num_elementos; i++){
		cout << arr[i] << endl;
	}
}

int main(){
	array<int,TAM> miArreglo;
	for (int i =0; i<TAM; i++){
		cin >> miArreglo[i];
	}
	cout << "Cantidad de elementos: " << miArreglo.size() << endl;
	cout << "Primeros 10 elementos: " << endl;
	imprimirArreglo(miArreglo,10);
	
	return 0;
}
