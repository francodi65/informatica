/******************************************************** 
	* C�tedra de Inform�tica- FCEFYN - UNC
	* Ayudantes Alumnos: Di Lorenzo Franco-Del Boca Juan
	* Trabajo Pr�ctico 1: "Sistema Bancario B�sico"
	* Alumno: <Escriba Aqui su nombre>
*********************************************************/

/******************** NO MODIFICAR **********************/	
#include <iostream>

using namespace std;


int inicio();
int depositar(int cuenta);
int retirar(int cuenta);
void saldo(int cuenta);
void movimientos(int mov[], int cantidad);

int main()
{
	int opcion;
	int cuenta;
	bool salir;
	int mov[100];
	
	int i=0;
	cuenta= 0;
	mov[i]= cuenta;
	i++;
	
	salir= false;
	
	while(salir==false){
		opcion= inicio();
		
		switch (opcion)
		{
			case 1:
				cuenta= depositar(cuenta);
				mov[i]= cuenta;
				i++;
				break;
			case 2:
				cuenta= retirar(cuenta);
				mov[i]= cuenta;
				i++;
				break;
			case 3:
				saldo(cuenta);
				break;
			case 4:
				movimientos(mov,i);
				break;
			case 5:
				cout << "Que tenga un buen dia"<< endl;
				salir= true;
				break;
			default:
				cout << "Opcion incorrecta, ingrese de nuevo"<< endl;
		}
	}
	system("PAUSE");
	return 0;
}

/*********************** MODIFICAR **********************/	


int inicio(){
	//Escriba aqui la funci�n inicio
}

int depositar(int cuenta){
	//Escriba aqui la funci�n depositar
}

int retirar(int cuenta){
	//Escriba aqui la funci�n retirar
}

void saldo (int cuenta){
	//Escriba aqui la funci�n saldo
}

void movimientos(int mov[],int cantidad){
	//Escriba aqui la funci�n movimientos	
}
