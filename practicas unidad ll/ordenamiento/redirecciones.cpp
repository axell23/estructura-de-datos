#include <iostream>
#include <array>
#include <ctime>

using namespace std;

const int T=2000;

void imprimirArreglo(array<int,T> &arr, int num_elementos){
	for (int i=0; i< arr.size() && i < num_elementos; i++){
		cout << arr[i] << endl;
	}
}

void ordenamientoBurbuja(array<int,T> &arr){
	int t= arr.size();
	bool des= true;
	for(int pase=0; pase < t-1 && des; pase++){
		des=false;
		for(int j=0; j<t-1-pase;j++){
			if (arr[j]>arr[j+1]){
				des= true;
				int temp= arr[j];
				arr[j]= arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
	cout << "_______________________________________________________Ordenado_______________________________________________________ \n";
	for(int i =0; i<T; i++){
		cin >> arr[i];
		printf("|%10d|", arr[i]);
		if ((i+1)%25==0){
			cout <<'\n';
		}
	} cout <<'\n';
}

int main(){
	array<int,T> miArreglo;
	
	cout << "_______________________________________________________Original_______________________________________________________ \n";
	for(int i =0; i<T; i++){
		cin >> miArreglo[i];
		printf("|%10d|", miArreglo[i]);
		if ((i+1)%25==0){
			cout <<'\n';
		}
	} cout <<'\n';
	
	clock_t inicio = clock();
	ordenamientoBurbuja(miArreglo);
	clock_t fin = clock();
	
	double tiempoSegundos = double(fin-inicio)/CLOCKS_PER_SEC;
	
	cout << "Cantiad de elementos: " <<miArreglo.size() << endl;
	cout << "Tiempo transcurrido: " << tiempoSegundos << " segundos" << endl;
	
	return 0;
}
