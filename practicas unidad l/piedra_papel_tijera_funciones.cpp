#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

// Prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);

int main(){
	using namespace std;
	std::cout << " Axell Balmore Flores Henriquez.\n Bienvenidos al juego de: \n";
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
	return 0;
}

//implementacion
std::string generarMovimientoComputadora(){
	std::string movimiento;
	int numeroAleatorio;
	
	// genero numero aleatorio
	srand(time(0));
	numeroAleatorio = rand() % 3 + 1;
	
	switch (numeroAleatorio)
	 {
		case 1:
	  		movimiento = "piedra";
	  		break;
		case 2:
	  		movimiento = "papel";
			break;
		case 3:
			movimiento ="tijera";
			break;		
	 }
	 
	 std::cout <<"computadora: " <<movimiento <<"\n";
	 
	 	 return movimiento;
}

std::string obtenerMovimientoJugador() {
	using namespace std;
	string movimiento;
	
	cout << "piedra, papel o tijera (para terminar el juego, escriba salir.\n";
	cin >> movimiento;
	
	return movimiento;
	
}
void determinarGanador(std::string computadora, std:: string jugador) {
	if (computadora == jugador) {
		std::cout <<"Empate!\n";
	}
	else if (jugador == "piedra") {
		procesarEntradaJugadorPiedra(computadora);
	}
	else if (jugador == "papel") {
		procesarEntradaJugadorPapel(computadora);
	}
	else if (jugador == "tijera") {
		procesarEntradaJugadorTijera(computadora);
	}
	else {
		std::cout <<"entrada no valida. Ingrese piedra, papel o tijera.\n";
	}
}

void procesarEntradaJugadorPiedra(std::string computadora) {
	if (computadora =="papel") {
		std::cout <<"la computadora gana. papel cubre piedra.\n";
	}
	else if (computadora == "tijera") {
		std::cout << "Usted gana. Piedra rompe tijera.\n";
	}
}
void procesarEntradaJugadorPapel(std::string computadora) {
	if (computadora == "piedra") {
		std::cout << "usted gana. papel cubre piedra.\n";
    }
	else if (computadora == "tijera") {
		std::cout <<"computadora gana. tijera corta papel.\n";
	}
}
void procesarEntradaJugadorTijera(std::string computadora) {
	if (computadora =="piedra") {
		std::cout << "computadora gana. piedra rompe tijera. \n";
    }
	else if (computadora =="papel") {
		std::cout <<"usted gana. tijera corta papel.\n";
	}
	
}



