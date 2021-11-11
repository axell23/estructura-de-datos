#include <iostream>
#include <string>
#include "pila.hpp"
#include <regex>
#include <iterator>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::regex;

bool estanEtiquetasCerradas(string expresion){
	regex etiquetas("<\\w+>|</\\w+>");
	regex cerrar("</\\w+>");
	regex abrir("<\\w+>");
	Pila<string> unaPila;
	
	//evalua la expresión y extrae solo etiquetas de apertura y cierre
	std::regex_iterator<std::string::iterator> rit ( expresion.begin(), expresion.end(), etiquetas );
  	std::regex_iterator<std::string::iterator> rend;
	
	// las etiquetas recuperas son recorridas una por una
  	while (rit!=rend) {
  		//se evalua si es de cierre o epertura, si es apertura se almacena en la pila
  		if (regex_match(rit->str(), abrir)) {
	    unaPila.push(rit->str());
	    // si es de cierre
		}else if(regex_match(rit->str(), cerrar)){
			//salida en caso no hay nada almacenado
			if(unaPila.estaPilaVacia()){
				return false;
			}
			// se recupera la ultima etiqueta se apertura, se limpian los valores y se comparan, si son diferentes, hay discrepacian y por tanto salida
			string apper=unaPila.pop();
			cout << apper<< endl;
			apper.erase(0, 1);
			apper.erase(apper.length()-1);
			//cout << apper<< endl;
			string cierr=rit->str();
			cierr.erase(0,2);
			cierr.erase(cierr.length()-1);
			//cout << cierr << endl;
			if(cierr != apper){
				return false;
			}
		}
	    ++rit;    
  	}
  	//en caso la etiqueta faltante sea la ultima se hace una evaluación extra
  	if(unaPila.estaPilaVacia()){
  		return true;
	  }else{
	  	return false;
	  }
//si todo se vacia el resultado es verdadero
	
}

int main() {
	
	string val;
	cout << "Ingrese el texto a evaluar etiquetas html" << endl;
	std::getline(cin, val);
	
	if (estanEtiquetasCerradas(val)) {
		cout << "ETIQUETAS BALANCEADAS" << endl;
	} else {
		cout << "LAS ETIQUETAS NO ESTAN BALANCEADAS" << endl;
	}
}
