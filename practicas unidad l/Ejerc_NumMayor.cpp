#include <iostream>
#include <cmath>

void ejercicio2();
void buscarMayor(int N1, int N2, int N3, int N4, int N5);

using namespace std;
int main(){
	cout << "Axell Balmore Flores Henriquez.\n";
	cout << "Determinar cual es el numero mayor.\n";
	ejercicio2();
	return 0;
}

void ejercicio2(){
	int numero1;
	int numero2;
	int numero3;
	int numero4;
	int numero5;
	
	cout << "Digite 5 numeros:\n";
	cout << " Numero 1 : ";
	cin >> numero1;
	cout << " Numero 2: ";
	cin >> numero2;
	cout << " Numero 3 : ";
	cin >> numero3;
	cout << " Numero 4 : ";
	cin >> numero4;
	cout << " Numero 5 : ";
	cin >> numero5;
	
	buscarMayor(numero1, numero2, numero3, numero4, numero5);
	
	
}

void buscarMayor(int N1, int N2, int N3, int N4, int N5){
	int numeroMayor;
	
	if(N1 >= N2 && N1 >= N3 && N1 >= N4 && N1 >= N5){
		numeroMayor = N1;
	}else if(N2 >= N1 && N2 >= N3 && N2 >= N4 && N2 >= N5){
		numeroMayor = N2;
	}else if(N3 >= N1 && N3 >= N2 && N3 >= N4 && N3 >= N5){
		numeroMayor = N3;
	}else if(N4 >= N1 && N4 >= N2 && N4 >= N3 && N4 >= N5){
		numeroMayor = N4;
	}else if(N5 >= N1 && N5 >= N3 && N5 >= N4 && N5 >= N2){
		numeroMayor = N5;
	}
	
	cout <<"\n El numero mayor es: " << numeroMayor << endl;
}

