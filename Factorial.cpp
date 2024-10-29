//Nadia Margarita Lopez Esparza
//29-10-2024
#include <iostream>
 
using namespace std;
 
 
/**
Esta funcion sirve para sacar el factorial del numero que es mandado desde main por el usuario,
recibe como variables los numeros que se insertaron. En el bloque IF se comprueba si el numero
es menor o igual a 1, este va a regresar a main un 1, si no, en el return va a regresar el numero que ingreso
el usuario multiplicado por el llamado o invocacion de esta misma funcion (aplicando la recursividad), donde
se mandara el numero restado por 1
**/
int calcular_factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * calcular_factorial(n - 1);
    }
}
 
 
/**
La función de simulación del cajero automático comienza con un saldo inicial de 20,000 MXN. 
Al usuario se le presenta un menú con opciones de operación. Si elige la opción 1, solo se mostrará el saldo actual de la cuenta. 
Si selecciona la opción 2, se le solicitará el monto que desea retirar. 
Si el monto ingresado supera el saldo disponible, la operación no se podrá realizar. En caso contrario,
 el monto solicitado se deducirá del saldo, se informará cuánto se retiró y se mostrará el saldo final al usuario.
**/
void cajeroAutomatico() {
    int cuenta = 20000;
    int opcion, monto;
 
	cout<<endl<<"#### Cajero automatico ####"
<<endl<<"Ingrese 1 para consultar el saldo"
<<endl<<"Ingrese 2 para retirar el efectivo y mostrarel saldo despues del retiro"
<<endl<<"Ingrese una opcion: ";
	cin>>opcion;
 
    switch(opcion) {
        case 1:
            cout<<endl<<"El saldo con el que usted cuenta es: "<<cuenta<<endl;
            break;
        case 2:
            cout<<endl<<"Ingrese el monto que desea retirar: ";
            cin>>monto;
 
            if (monto > cuenta) {
                cout<<endl<<"El saldo es insuficiente...";
            } else {
                cout<<endl<<"Usted ha retirado: "<<monto;
                cuenta -= monto;
                cout<<endl<<"El saldo despues del retiro es: "<<cuenta<<endl;
            }
            break;
        default:
            cout<<endl<<"Ingrese una opcion valida..."<<endl;
            break;
    }
}
 
 
/**
La función principal, que es donde se ejecuta todo el proceso, comienza mostrando un menú de opciones. 
Al presionar 1, el usuario deberá ingresar el número para calcular su factorial, 
y luego se mostrará el resultado mediante la llamada a la función "calcular_factorial".
 Si se elige la opción 2, se ejecutará una nueva función para la operación de cajero automático.
  Finalmente, al seleccionar 0, el sistema se cerrará.
**/
int main(){
	int numero, opc;
	do{
		cout<<endl<<"* * * Menu de seleccion * * *"
<<endl<<"Ingrese 1 para calcular el factorial de un numero"
<<endl<<"Ingrese 2 para ingresar al cajero automatico"
<<endl<<"Ingrese una opcion: ";
		cin>>opc;

		switch(opc){
			case 1:
				cout<<endl<<"Ingrese el numero a sacar factorial: ";
				cin>>numero;
				cout<<endl<<"El factorial del numero "<<numero<<" es: "<<calcular_factorial(numero)<<endl;
				break;
			case 2:
				cajeroAutomatico();
				break;
			case 0:
				cout<<endl<<"Usted ha salido del sistema!"<<endl;
				break;
			default:
				cout<<endl<<"Ingrese una opcion valida..."<<endl;
				break;
		}
	}while(opc != 0);

	return 0;
}