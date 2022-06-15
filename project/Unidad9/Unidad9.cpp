// Unidad9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stack>
#include <queue>

#include "search.h"
#include "sort.h"

using namespace std;

int main()
{
/*
	stack<string> screens;

	screens.push("splash");			// Insertar al final un elemento
	screens.push("main");
	screens.push("level_select");
	screens.push("gameplay");
	screens.push("pause");

	cout << screens.size() << "\n";	// Conocer el tamaño de la pila
	cout << screens.top() << "\n";	// Obtener el ultimo elemento de la pila

	screens.pop();					// Retirar el ultimo elemento de la pila
	screens.empty();				// Vaciar la pila

	system("pause");


	
	queue<string> combo;

	combo.push("kick");				// Insertar al final un elemento
	combo.push("punch");
	combo.push("punch");
	combo.push("uppercut");

	cout << combo.size() << "\n";	// Conocer el tamaño de la cola
	cout << combo.front() << "\n";	// Obtener un elemento
	cout << combo.back() << "\n";	// Obtener un elemento

	combo.pop();					// Retirar el primer elemento de la cola
	combo.empty();					// Vaciar la cola




	vector<string> fighters;

	fighters.push_back("Liu Kang");			// Insertar al final un elemento
	fighters.push_back("Scorpion");
	fighters.push_back("Subzero");
	fighters.push_back("Kano");
	fighters.push_back("Goro");

	fighters.erase(fighters.begin() + 3);	// Eliminar un elemento

	cout << fighters.at(2) << "\n";			// Obtener un elemento
	cout << fighters[2] << "\n";			// Obtener un elemento
	cout << fighters.size() << "\n";		// Conocer el tamaño de la lista
	fighters.empty();						// Vaciar la lista


*/

	int numeros[10] = { 10,7,6,1,5,4,3,9,8,2 };

	cout << "Step 1" << "\n";
	for (int i = 0; i < 10; i++) {
		cout << numeros[i] << "\n";
	}

	bubbleSort(numeros, 10);

	cout << "Step 2" << "\n";
	for (int i = 0; i < 10; i++) {
		cout << numeros[i] << "\n";
	}

	system("pause");
}
