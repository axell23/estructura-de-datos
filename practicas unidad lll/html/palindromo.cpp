#include <iostream>
#include <string>
#include <cctype>
#include "pila.hpp"
#include "colas.hpp"

using namespace std;

string limpia(string val){
	//elimina espacios
	int count = 0;
    for (int i = 0; val[i]; i++)
        if (val[i] != ' ')
            val[count++] = val[i]; // here count is
                                   // incremented
    val[count] = '\0';
    
    
    //elimina caracteres especiales
    size_t i = 0;
	size_t len = val.length();
	while(i < len){
	    if (!isalnum(val[i]) || val[i] == ' '){
	        val.erase(i,1);
	        len--;
	    }else
	        i++;
	}
    
    //pasa todo a minusculas
      for (int i = 0; i < val.length(); i++) {
    val[i] = tolower(val[i]);
 	}
    
    cout<<val<<endl;
    return val;
    
}

bool palindromo (string expresion){
	Pila<char> pila;
	Cola<char> cola;
	
	string val=(limpia(expresion));
	for (int i = 0; i < val.size(); i++) {
		char caracter = val[i];
		pila.push(caracter);
		cola.enqueue(caracter);
	}
	
	for (int i = 0; i < val.size(); i++) {
		if (pila.pop() != cola.dequeue()) {
			return false;
		}
	}
	
	return true;
}

int main() {
	
	string val;
	cout << "Ingrese una palabra palindroma" << endl;
	std::getline(cin, val);
	
	if (palindromo(val)) {
		cout << "Efectivamente es palindromo :D" << endl;
	} else {
		cout << "Lastimosamente no es, intenta de nuevo" << endl;
	}
}
