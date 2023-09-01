/******************************************************************************
EJERCICIO 1
Desarrollar una clase “Cadena” para el manejo de cadenas de caracteres.
Además del constructor debe implementar como mínimo 5 métodos con
funcionalidades referidas a la manipulación de cadenas: longitud, Concatenar,
Copiar, Buscar coincidencias por carácter o por subcadena, etc. Demostrar el
funcionamiento de dicha Clase Cadena en el programa principal
******************************************************************************/

#include <iostream>
#include <string.h>
using namespace std;
class miClase{
private:
	char cadena_a[20];
	char cadena_b[20];
public:
	void ingresarCadena(){
		cout << "Ingrese su primer cadena: ";
		cin >> cadena_a;
		cout << "Ingrese su segunda cadena: ";
		cin >> cadena_b;
	}
	void longitud(){
		cout << "La longitud de su cadena 1 es: " << strlen(cadena_a) << "\n";
		cout << "La longitud de su cadena 2 es: " << strlen(cadena_b) << "\n";
	}
	void concatenar(){
		cout << "Su cadena concatenada es: " << strcat(cadena_a,cadena_b) << "\n";
	}
	void sonIguales(){
		if(strcmp(cadena_a,cadena_b)==0){
			cout << "Las cadenas 1 y 2 son exactamente iguales\n";
		}
		else cout << "Las cadena 1 y 2 no son exactamente iguales\n";
	}
	void comparar(){
		if(strstr(cadena_a,cadena_b)){
			cout << "La cadena 2 es una subcadena de: " << strstr(cadena_a,cadena_b);
		}
		else cout << "La cadena 2 no es subcadena de: " << cadena_a;
	}
};

int main(int argc, char *argv[]) {
	miClase class_a;
	int op;
	do{
		cout << "\nElija una opcion:\n0- Salir.\n1- Ingresar cadenas.\n2- Longitud de cadenas.\n3- Concatenar cadenas.\n4- Verificar si son cadenas iguales\n5- Verificar subcadena\nSu opcion: ";
		cin >> op;
		switch(op){
		case 1:
			system("cls");
			class_a.ingresarCadena();
			break;
		case 2:
			system("cls");
			class_a.longitud();
			break;
		case 3:
			system("cls");
			class_a.concatenar();
			break;
		case 4:
			system("cls");
			class_a.sonIguales();
			break;
		case 5:
			system("cls");
			class_a.comparar();
		}
	} while(op!=0);
	return 0;
}

