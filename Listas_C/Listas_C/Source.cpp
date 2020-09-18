//Sustituir las caras por los puntos:
//insercion lista.insert(it, 1, '.')
//eliminacion lista.erase(it);

//Sustitucion
#include <iostream>
#include <list>

using namespace std;

list<string> palabras;
list<string>::iterator it;

int main() {

	palabras.push_back("bicicleta");
	palabras.push_back("chorizo");
	palabras.push_back("pan");
//Borra la segunda posicion
	it = palabras.begin();//señala el primer elemento "bicicleta"
	it++;//el puntero señala al siguiente elemento de la lista.
	palabras.insert(it, 1, "pelota");
	//palabras.erase(it);//Aqui dara problema por eliminar un elemento y pedirle al iterador que siga leyendo
	it++;//tercer elemento
	it++;//cuarto elemento
	//mostrar lista
	for (it = palabras.begin(); it != palabras.end(); it++) {
		cout << *it << endl;
	}

	return 0;
}




/*Ejercicio sobre busqueda e insercion de elementos en una lista: 
se genera aleatoriamente una lista de 2000 caracteres ASCII cuyo codigo va del 1 al 6 y se contarán las caras
sonrientes que haya las blancas y las negras*/
//usar srandtime NULL para que los numeros sean aleatorios,...que la ruleta gire
/*#include <iostream>
#include <list>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main() {
	unsigned i=0;
	char caracter = 1;
	srand(time(NULL));

	list<char> caracteres; //Lista tipo string
	list<char>::iterator it; //Iterador para la lista tipo string

	while (i <= 2000) {
		caracter = rand() % (6 - 1 + 1) + 1;
		caracteres.push_back(caracter);
		cout << caracter;
		i++;
	}
	//Se le dice al iterador la posicion en la que debe colocarse; al inicio
	it = caracteres.begin();
	char caracter1 = 1;
	char caracter2 = 2;
	int j=0 ;
	//Busqueda de un elemento determinado; caracter en este caso
	while ( it != caracteres.end()) {//mientras el puntero no llegue al final de la lista
			
		if(*it == caracter1|| *it == caracter2)
		j++;
		it++;
	}cout<<"Numero de caracteres " <<caracter1<<" y "<<caracter2<<"= "<< j;
	
	return 0;
}*/

/*Insercion y busqueda de elementos en una lista.
Busqueda: se iterará con el iterador los elementos de la lista  y se comparara el elemento con lo que busco. 
Después se puede insertar un elemento en la posicion deseada.
En el ejemplo se hara una lista de animales y se insertará otro*/
/*
#include <iostream>
#include <list>

using namespace std;

int main() {
	list<string> animales; //Lista tipo string
	list<string>::iterator it; //Iterador para la lista tipo string

	//almacenar datos en la lista desde abajo
	animales.push_back("hipopotamo");
	animales.push_back("cocodrilo");
	animales.push_back("nhu");
	animales.push_back("gacela");

	//Se le dice al iterador la posicion en la que debe colocarse; al inicio
	it = animales.begin();
	//Busqueda de un elemento determinado; ñu en este caso
	while (*it != "nhu" && it != animales.end()) it++;
	//it++; //esto es un ajuste a gusto del programador para ponerlo o no despues de la posicion de vaca o en la 
	//posicion de vaca
	animales.insert(it, 1, "cebra");
	//se muestra la lista
	it = animales.begin();
	while (it != animales.end()) {
		cout << *it++ << endl;
		//cout<<*it<<endl;
		//it++;
	}


	return 0;
}*/











/*Hacer un programa que genere 100 numeros del uno al seis y que muestre las tiradas en orden ascendente y descendente
y mostrar la lista original sin ordenar (Sin hacer)*/




/*
//Ordenacion de listas

#include <iostream>
#include <list> //para trabajar con listas

using namespace std;

list <string> planetas;   //Tb pueden ser objetos, meto la clase, ints, etc
list <string>::iterator it;
list <string>::reverse_iterator itr;//iterador invertido
double num, suma;

int main() {
	//Se añaden elementos
	planetas.push_back("Mercurio");
	planetas.push_back("Venus");
	planetas.push_back("Tierra");
	planetas.push_back("Marte");
	planetas.push_back("Jupiter");
	planetas.push_back("Saturno");
	planetas.push_back("Urano");
	planetas.push_back("Neptuno");

	//mostrar lista original
	//necesitaré un iterador para poder conservar la informacion y poder pasar de unos a otros
	cout << "\n Lista original ... " << endl;
	it = planetas.begin();
	while (it != planetas.end()) {
		cout << *it++ << " ";
	}cout << endl;

	planetas.sort();//ordena la lista alfabeticamente
		//mostrar lista original
	//necesitaré un iterador para poder conservar la informacion y poder pasar de unos a otros
	cout << "\n Lista ordenada en ascendente ... " << endl;
	it = planetas.begin();
	while (it != planetas.end()) {
		cout << *it++ << " ";
	}cout << endl;
	//para ordenarla en forma descendente puedo usar un reverse, a la lista ya ordenada en ascendente
	planetas.reverse();
	cout << "\n Lista ordenada en descendente ... " << endl;
	it = planetas.begin();
	while (it != planetas.end()) {
		cout << *it++ << " ";
	}cout << endl;
	//Uso de iteradores invertidos; reverse iterator, el iterador que señala no al front, si no al back

	cout << "\n Lista ordenada en ascendente ... " << endl;
	itr = planetas.rbegin();//inicio de la liste invertida
	while (itr != planetas.rend()) {//final de la lista invertida
		cout << *itr++ << " ";
	}cout << endl;




	return 0;
}*/







//este programa. sin tener que hacer que el puntero se mueva, suma los elementos de la lista, 
//eliminando el front de la misma, asi, el resto de elementos van subiendo. es decir, aqui no necesito iterador
/*
#include <iostream>
#include <list> //para trabajar con listas

using namespace std;

list <double> lista;   //Tb pueden ser objetos, meto la clase, ints, etc
double num, suma;

int main() {
	do {
		cout << "Ingrese un numero, 0 para salir";
		cin >> num;
		if (num != 0) lista.push_back(num);
	} while (num != 0);

	while (!lista.empty()) {
		num = lista.front();
		cout << num << endl;
		suma += num;
		lista.pop_front();
		}
	cout << "total: " << suma << endl;










*/
/*//Ejercicio de pilas: se le requiere al usuario nombres de electrodomesticos que se almacenan en una pila
//Si la palabra introducida es salir se saldrá del programa y se mostrará la lista

#include <iostream>
#include <list> //para trabajar con listas

using namespace std;

list <string> electrodomesticos;   //Tb pueden ser objetos, meto la clase, ints, etc
list <string>::iterator it;//iterador con el nombre "it", necesario para poder recorrer la lista, es un puntero

int main() {
	string electrodom;
	

	cout << "\n Introduzca nombres de electrodomesticos: " << endl;
	cin >> electrodom;
	electrodomesticos.push_back(electrodom);
	while (electrodom != "salir") {
		cout << "\n Introduzca nombres de electrodomesticos (salir, para salir): " << endl;
		cin >> electrodom;
		if (electrodom == "salir") {

		}
		else {
			electrodomesticos.push_back(electrodom);
		}


	}cout << endl;
	cout << "Lista electrodomesticos: \n"<< endl;
	for (it = electrodomesticos.begin(); it != electrodomesticos.end(); it++) {
		
		cout << *it << endl;
	}
	return 0;*/
//}
/*//Listas:
//Util por ejemplo en el programa de facturas para recorrer las facturas almacenadas, eliminarlas...
#include <iostream>
#include <list> //para trabajar con listas

using namespace std;

list <string> empleados;   //Tb pueden ser objetos, meto la clase, ints, etc
list <string>::iterator it;//iterador con el nombre "it", necesario para poder recorrer la lista, es un puntero

int main() {

	//se añaden elementos a la lista
	empleados.push_back("Pepe1");  //Las colas o ultimas posicion se llaman back y front es la primera posicion
	empleados.push_back("Pepe2");  //añado (push) por abajo ()back
	empleados.push_back("Pepe3");	//Probar con pushfront
	empleados.push_back("Pepe4");
	empleados.push_back("Pepe5");
	//Para recorrer la lista hay que usar unos iteradores especiales
	//ver lista: (desde el principio hasta el final)
	for (it = empleados.begin(); it != empleados.end(); it++) {
		cout << *it << endl;
	}

	//Para ver el primer elemento de la lista
	cout << "primer elemento: " << empleados.front() << endl;
	//Para ver el primer elemento de la lista
	cout << "ultimo elemento: " << empleados.back() << endl;
	//Para ver el tamaño de la lista
	cout << "primer elemento: " << empleados.size() << endl;
	//eliminar ultimo elemento de la lista
	empleados.pop_back();
	cout << "tamano lista: " << empleados.size() << endl;
	//erase
	it = empleados.begin();
	empleados.erase(it);
	cout << "tamano lista: " << empleados.size() << endl;
	cout << "primer elemento: " << empleados.front() << endl;

	//ver lista eliminando
	while (!empleados.empty()) {
		cout << empleados.front() << endl;//muestra primer elemento
		empleados.pop_front();//elimina primer elemento
	}
	cout << "tamano lista; " << empleados.size() << endl;
	return 0;
}*/