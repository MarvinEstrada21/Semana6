#include <iostream>
#include "Integer.h"

using namespace std;

int main(){
	Integer entero(100);
	Integer entero2(100);
	cout << "El entero es: " << entero + 11.8 << endl;
	if (entero == entero2){
		cout << "son iguales" << endl;
	}

	//Static Cast
	cout << static_cast <int> (entero) << endl;

	//int i = 0;
	//cout << ++;
	return 0;
}