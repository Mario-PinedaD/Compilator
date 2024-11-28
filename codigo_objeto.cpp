#include <iostream>
using namespace std;
int main() {
	int a = 5; 
	int b = 2; 
	float c = 3.14; 
	bool d; 
	int g; 
	a = 5 + 2;
	cin >> a; 
	cout << "El valor de a" << a << endl; 
	cout << "Esta es una prueba de escritura" << endl; 
	if ((a > 10)) { 
		cout << "a es mayor que 10, primer if" << endl; 
	} 
else  { 
	cout << "a no es mayor que 11, parte else" << endl; 
	} 
	if ((b != 10)) { 
		cout << "b es diferente a 10, primer if" << endl; 
	} 
else if ((b != 30)) { 
	cout << "b es diferente a 30, segundo if" << endl; 
	} 
else  { 
	cout << "No cumplió con ninguna y se fué al Else" << endl; 
	} 
	switch (a) {
	case 1:
	cout << " ELDIAVLO 1 " << endl; 
	break;
	case 2:
	cout << "ELDIAVLO 2 " << endl; 
	break;
}
	cout << "\nPresiona Enter para salir...";
	cin.ignore();
	cin.get();
	return 0;
}