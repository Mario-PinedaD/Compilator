#include <iostream>
using namespace std;
int main() {
	int a = 5; 
	float b = 3.14; 
	bool d; 
	cin >> a; 
	cout << "El valor de a es: " << a << endl; 
	cout << "El valor de b es: " << b << endl; 
	cout << "El valor de d es: " << d << endl; 
	if ((a > 10)) { 
		cout << "a es mayor que 10" << endl; 
	} 
else  { 
	cout << "a no es mayor que 10" << endl; 
	} 
	cout << "\nPresiona Enter para salir...";
	cin.ignore();
	cin.get();
	return 0;
}