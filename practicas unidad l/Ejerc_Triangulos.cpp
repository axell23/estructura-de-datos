
#include <iostream>
#include <cmath>

void ejercicio1();
void areaTrianguloEquilatero(double areaEquilatero);
void areaTrianguloIsoscel(double A, double B, double C);
void areaTrianguloEscaleno(double ladoA, double ladoB, double ladoC);

using namespace std;
int main(){
	cout << "Ejercicio 1: Determinar Area del triangulo.\n";
	cout << "Axell Balmore Flores Henriquez.\n";
	ejercicio1();
	return 0;
}

void ejercicio1(){
	double ladoA;
	double ladoB;
	double ladoC;
	
	cout << " Favor digitar el valor del lado A: ";
	cin >> ladoA ; 
	cout << " Favor digitar el valor del lado B: ";
	cin >> ladoB ; 
	cout << " Favor digitar el valor del lado C: ";
	cin >> ladoC ; 
	
	if(ladoA == ladoB && ladoB == ladoC){
		cout << " Dados los valores el Triangulo es Equilatero \n";
		areaTrianguloEquilatero(ladoA);
		
	}else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
		cout << "  Dados los valores Triangulo es Isoscel \n";
		areaTrianguloIsoscel(ladoA, ladoB, ladoC);
	}else{
		cout << "  Dados los valores el Triangulo es escaleno \n";
		areaTrianguloEscaleno(ladoA, ladoB, ladoC);
	}
}

void areaTrianguloEquilatero(double areaEquilatero){
	double area;
	
	area = (sqrt(3)/4)*pow(areaEquilatero, 2);
	
	cout << " El area del triangulo es: " << area << endl;
};

void areaTrianguloIsoscel(double A, double B, double C){
	double ladoIgual;
	double base;
	double area;
	
	if(A == B){
		ladoIgual = A;
		base = C;
	}else if(A == C){
		ladoIgual = A;
		base = B;	
	}else{
		ladoIgual = B;
		base = A;
	}
	
	area = ( (base) * ( sqrt( pow(ladoIgual, 2 ) - ( pow(base, 2) / 4)))) / 2;
	
	cout << " El area del triangulo es: " << area << endl;
	
};

void areaTrianguloEscaleno(double ladoA,double ladoB,double ladoC){
	double semiPerimetro = (ladoA + ladoB + ladoC)/2;
	double area;
	
	area = sqrt(semiPerimetro * (semiPerimetro - ladoA) * (semiPerimetro - ladoB) * (semiPerimetro - ladoC));
	
	cout << " El area del triangulo es: " << area << endl;
};

