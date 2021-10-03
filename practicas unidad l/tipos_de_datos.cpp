#include <iostream>
#include <limits>

using namespace std;

int main() {
	
	int imin = numeric_limits<int>::min();
	int imax = numeric_limits<int>::max();

	cout << "imin = " << imin << endl;
	cout << "imax = " << imax << "\n";
	cout << "tamanio de int : " << sizeof(int) << endl;
	
	float fmin = std::numeric_limits<float>::min();
	float fmax = std::numeric_limits<float>::max();
	
	cout << " fmin = " << fmin << endl;
	cout << " fmax = " << fmax << "\n";
	cout << " tamanio de float : " << sizeof(float) << endl;
	
	char chmin = numeric_limits<char>::min();
	char chmax = numeric_limits<char>::max();
	
	cout << " chmin = " << chmin << endl;
	cout << " chmax = " << chmax << "\n";
	cout << " tamanio de char : " << sizeof(char) << endl;
	
	long long llmin = numeric_limits<long long >::min();
	long long llmax = numeric_limits<long long >::max();
	
	cout << " llmin = " << llmin << endl;
	cout << " llmax = " << llmax << endl;
	cout << " tamanio de long : " << sizeof(long long) << endl;
	
	double dmin = numeric_limits<double>::min();
	double dmax = numeric_limits<double>::max();
	
	cout << "dmin = " << dmin << endl;
	cout << "dmax = " << dmax << endl;
	cout << "tamañio de double : " << sizeof(double) << endl;
	
	long double ldmin = numeric_limits<long double>::min();
	long double ldmax = numeric_limits<long double>::max();
	
	cout << "ldmin = " << ldmin << endl;
	cout << "ldmax = " << ldmax << endl;
	cout << "tamanio de long double : " << sizeof(long double) <<endl;
	
	
	return 0;


	
}
