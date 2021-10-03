#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
	int movJug;
	cout << " Axell Balmore Flores Henriquez \n ";
	cout << " Juguemos a la piedra, papel o tijera selecciona tu movimineto \n ";
	cout << " 1. Piedra \n 2. Papel \n 3. Tijera \n : ";
	cin >> movJug;
	srand(time(0));
	string movComp;
	int numMov = rand() % 3+1;
	switch(numMov) {
		case 1:
			movComp= "Piedra";
			break;
		case 2:
			movComp= "papel";
			break;
		case 3:
			movComp= "tijera";
			break;
	}
	cout << " la computadora escogio: " << movComp << endl;
	if (movJug == numMov){
		cout << " Empate \n";
	} else if ( (movJug == 1) && (numMov == 3) ){
		cout << " Ganaste \n";
    } else if ( (movJug == 2) && (numMov == 1) ){
    	cout << " Ganaste \n";
	} else if ( (movJug == 3) && (numMov == 2) ){
		cout << " Ganaste \n";
	} else {
		cout << " Perdiste \n";
	}
    return 0;
    
	}
	
