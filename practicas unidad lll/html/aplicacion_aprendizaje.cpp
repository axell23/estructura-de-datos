#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <ctype.h>
#include <cmath>
#include<algorithm>
#include <vector>

using namespace std;
//autor: FH100217 Axell Balmore Flores Henriquez

//funciones generales
void LimpiarPantalla(){
	#ifdef _WIN32
    	system("cls");
  	#else
    	system("clear");
  	#endif
}

int datos(){
	LimpiarPantalla();
	int opc;
	cout << "--- FH100217 Axell Balmore Flores Henriquez--- \n";
	cout <<"Muestra de aprendizaje \n Seleccione la funcion que usted desea ejecutar\n";
	cout << " 1.Triangulo \n 2.Numero mayor \n 3.Promedio \n =>:";
	cin >> opc;
	return opc;
}

bool continuar (){
	string r;
	cout << "Desea continuar? s/n \n";
	cin >> r;
	if (r !="S" && r !="N" && r !="s" && r !="n"){
		continuar();
	}else{
		if(r=="S" || r=="s"){
			return true;
		}else{
			return false;
		}
	}
}

//funciones de area

string tipo(double a, double b,double c){
	if(a==b){
		if(a==c){
			return "equilatero";
		}else{
			return "isoseles";
		}
	}else if (a==c){
		return "isoseles";
	}else{
		return "escaleno";
	}
}

double area (double a, double b, double c){
	double semiP=(a+b+c)/2;
	return sqrt(semiP*(semiP-a)*(semiP-b)*(semiP-c));
}

int primerPunto(){
	double a,b,c;
	LimpiarPantalla();
	cout << "La presente aplicacion determina el tipo de triangulo y el area en base a los datos provistos \n";
	cout << "Lado 1: ";
	cin >> a;
	cout << "\nLado 2: ";
	cin >> b;
	cout << "\nLado 3: ";
	cin >> c;
	
	cout << "El tipo de triangulo es: " << tipo(a,b,c) << "\n";
	cout << "El area del triangulo es: " << area(a,b,c) << "\n";
	
	if(continuar()){
		primerPunto();
	}else{
	}

	return 0;
}

//funciones de numero mayor
double mayor (double a,double b,double c,double d,double e){
	double mayor;
	if(a>=b && a>=c && a>=d && a>=e){
		mayor = a;
	} else if(b>=a && b>=c && b>=d && b>=e){
		mayor = b;
	} else if(c>=a && c>=b && c>=d && c>=e){
		mayor = c;
	} else if(d>=a && d>=c && d>=b && d>=e){
		mayor = d;
	} else if(e>=a && e>=c && e>=d && e>=b){
		mayor = e;
	}
	return mayor;
}

int segundoPunto(){
	double a,b,c,d,e;
	LimpiarPantalla();
	cout << "La presente aplicacion determina el numero mayor de 5 numeros en base a los datos provistos \n";
	cout << "Primer numero: ";
	cin >> a;
	cout << "\nSegundo numero: ";
	cin >> b;
	cout << "\nTercer numero: ";
	cin >> c;
	cout << "\nCuarto numero: ";
	cin >> d;
	cout << "\nQuinto numero: ";
	cin >> e;
	
	cout << "El numero de mayor valor es:  " << mayor(a,b,c,d,e) << "\n";
	
	if(continuar()){
		segundoPunto();
	}else{
	}
	return 0;	
}

// funciones promedio

int tercerPunto(){
	LimpiarPantalla();
	bool cont = true;
	double temp = 0;
	//vector <string> data;
	int i=0;
	cout << "La presente aplicacion determina el promedio de n numeros provistos \n";	
	while(cont){
		string a;
		cout << "Ingrese un valor \n ===>";
		cin >> a;
		
		temp += stod(a);
		i++;
		//data.push_back(a);
		if(continuar()){			
		}else{			
			cont =false;
		}
	//	cout << data;
	}
	 //for (auto i = data.begin(); i != data.end(); ++i)
       // cout << *i << " ";
       //cout << data[1];
    cout << "El promedio es:  " << (temp/i) << "\n";
	
	if(continuar()){
		tercerPunto();
	}else{
	}
	return 0;	
}

int main (){
	bool conf = true;
	while(conf){
		switch (datos()){
		case 1:
			primerPunto();
			break;
		case 2:
			segundoPunto();
			break;
		case 3:
			tercerPunto();
			break;
		default:
			break;
		}
		cout <<"Puede regresar al menu principal ";
		conf = continuar();
		
	}		
	
}
