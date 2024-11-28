#include <iostream>
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	int a = 5; 
	int b = 2; 
	float c = 3.14; 
	bool d; 
	cin >> a; 
	cout << "El valor de a es: " << a << endl; 
	cout << "El valor de b es: " << b << endl; 
	cout << "El valor de c es: " << c << endl; 
	cout << "El valor de d es: " << d << endl; 
	if ((a > 10)) { 
		cout << "a es mayor que 10" << endl; 
	} 
	cout << "a no es mayor que 10" << endl; 
	switch (a) {
	case 1:
	cout << "Esta es una prueba del switch 1" << endl; 
	break;
	case 2:
	cout << "Esta es una prueba del switch 2" << endl; 
	break;
	default: 
	cout << "jiji" << endl; 
}
while ((c < 10.0)) {
	cout << "PRUEBA WHILE" << endl; 
}
	cout << "\nPresiona Enter para salir...";
	cin.ignore();
	cin.get();
	return 0;
}