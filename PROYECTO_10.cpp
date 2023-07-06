#include <iostream>
#include<cstdlib>
#include<conio.h>
#include <string>
#include <algorithm>
#ifdef _WIN32
#include<windows.h>
#endif 

using namespace std;

void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void promedio(void){
    char salir;
    int i;
    int calificaciones[10];
    int suma = 0;

    do{
        limpiar_pantalla();
        cout << "Promedio de 10 calificaciones" <<"\n\n\n";
        for(i=0;i<10;i++){
            cout << "\nIngresa la calificación " <<i+1 <<": ";
            cin >> calificaciones[i];
            while(calificaciones[i]>10){
            	cout<<"La opcion no es valida, vuelva a digitarla: "; cin >> calificaciones[i];
			}
            suma = suma + calificaciones[i];
        }
        cout << "\nEl promedio de las calificaciones es: " << suma/10;
        
        cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
        cin >> salir;       
    }while(salir != 's');

}

void areas(void){
	char salir;
	int opc1 = 0;
	do{
   		limpiar_pantalla();
   		cout << "*********************** FIGURAS *****************************\n\n\n\n";
   		cout << "1. Triangulo\n";
		cout << "2. Rectangulo\n";
		cout << "3. Circulo\n";
		cout << "\n\n\nSelecciona alguna opcion:_"; cin >> opc1;
		switch(opc1){
			case 1:
				float base, altura, area;
				limpiar_pantalla();
				cout << "Digite la base del triangulo: "; cin >> base;
				cout << "\nDigite la altura del triangulo: "; cin >> altura;
				area = (base * altura) / 2;
				limpiar_pantalla();
				cout << "\nEl area del triangulo es: " << area << endl;
				cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_";
        		cin >> salir;
				limpiar_pantalla();
				break;
			
			case 2:
				float b, h, a;
				limpiar_pantalla();
				cout << "Digite la base del rectangulo: "; cin >> b;
				cout << "\nDigite la altura del rectangulo: "; cin >> h;
				a = b * h;
				limpiar_pantalla();
				cout << "El area del rectangulo es: " << a << endl;
				cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_";
        		cin >> salir;
				limpiar_pantalla();
				break;
			
			case 3:
				float r, ar;
				limpiar_pantalla();
				cout << "Digite el radio del circulo: "; cin >> r;
				ar = (r * r) * 3.1416;
				limpiar_pantalla();
				cout << "El area del circulo es: " << ar << endl;
				cout << "\n\n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_";
        		cin >> salir;
				limpiar_pantalla();
				break;		
		}
	}while(salir != 's');
}

void numeroMasGrande(int n[]){
    char salir;
    do{
    	limpiar_pantalla();
    	int masGrande=n[0];
			for(int i=0;i<10;i++){
       		cout<<"\ningrese el numero["<<i+1<<"]:_";
       		cin>>n[i];
	  		}
    	for(int i=0;i<10;i++){
    		if(n[i+1]>masGrande){
    		masGrande=n[i+1];}}
    	cout<<"\nel numero mas grande es:"<<masGrande;
    	cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
        cin >> salir;       
    }while(salir != 's');
}

void diaDeLaSemana(){
    int op;
    char salir;
    do{
    	limpiar_pantalla();
    	string frase="Hoy es";
    	string dia;
    	string estas;
    	
    	cout<<"**************** Menu de dias ****************\n\n\n\n";
    
    	cout<<"1) Domingo"<<endl;
    	cout<<"2) Lunes"<<endl;
    	cout<<"3) Martes"<<endl;
    	cout<<"4) Miercoles"<<endl;
    	cout<<"5) Jueves"<<endl;
    	cout<<"6) Viernes"<<endl;
    	cout<<"7) Sabado"<<endl;
    
    	cout<<"\n\n\n\nDigite en que dia esta: "; cin>>op;
    	while(op<1 or op>7){
    		cout<<"La opcion no es valida, vuelva a digitarla: ";cin>>op;
		}
		cout<<"\n";
    	switch(op){
    		case 1:
    			dia="domingo";
    			estas=frase+" "+dia;
    			cout<<estas;
    		break;
    		case 2:
    			dia="lunes";
    			estas=frase+" "+dia;
    			cout<<estas;
    		break;
    		case 3:
    			dia="martes";
    			estas=frase+" "+dia;
    			cout<<estas;
    		break;
    		case 4:
    			dia="miercoles";
    			estas=frase+" "+dia;
    			cout<<estas;
    		break;
    		case 5:
    			dia="jueves";
    			estas=frase+" "+dia;
    			cout<<estas;
    		break;
    		case 6:
    			dia="viernes";
    			estas=frase+" "+dia;
    			cout<<estas;
    		break;
    		case 7:
    			dia="sabado";
    			estas=frase+" "+dia;
    			cout<<estas;
    		break;
		}
	cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
        cin >> salir;       
    }while(salir != 's');
}

void convertirMayusculas(){
    
    char salir;
	std::string nombres[5];
	
	do{
	limpiar_pantalla();
	for(int i=0; i<5; i++){
		cout << "Digite el nombre " << i+1 << ": ";
		cin >> nombres[i]; cout << "\n";
		std::transform(nombres[i].begin(), nombres[i].end(), nombres[i].begin(), ::toupper);
	}
	
	limpiar_pantalla();
	
	for (int j=0; j<5; j++){
		std::cout << j << ". " << nombres[j] << "\n" << std::endl;
	}
	
	cout << "\n\n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_";
	cin >> salir;
	
	}while(salir != 's');
}

void Dibuja(void){
	char salir;
    do{
    	limpiar_pantalla();
		for(int f=0;f<3;f++){
			for(int c=0;c<3;c++){
				if(f<2){
					cout<<"__";	
				}else{cout<<"  ";
				}if(c<2){
					cout<<"|";
				}}
		cout<<endl;}
	cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
        cin >> salir;       
    }while(salir != 's');
}

void Datos(void){
    char salir;
	std::string nombres[5],direccion[5];
	do{
	limpiar_pantalla();
	for(int i=0; i<5; i++){
		cout << "Digite el nombre " << i+1 << ": ";
		cin >> nombres[i];
		
		cout << "Digite la direccion de la persona " << i+1 << ": ";
		cin >> direccion[i];
		cout << "\n";
	}
	limpiar_pantalla();
	for(int i=0; i<5; i++){
		cout << i+1 << ". " << nombres[i] << endl;
		cout << "Direccion: " << direccion[i] << "\n\n"; 
	}
	cout << "\n\n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_";
	cin >> salir;
	}while(salir != 's');
}

int main()
{

    int opc = 0;
    do{
        limpiar_pantalla();
        cout << "*********************** MENU PRINCIPAL *****************************\n\n\n\n";
        cout << "1) Promedio de Calificaciones\n";
        cout << "2) Calculo de Areas\n";
        cout << "3) Numero mas grande\n";
        cout << "4) Dias de la Semana\n";
        cout << "5) Convertir Mayusculas\n";
        cout << "6) Dibujar gato\n";
        cout << "7) Nombre y domicilio\n";
		cout << "0) Salir\n";
        cout << "\n\n\nSelecciona alguna opcion: ";
        cin >> opc;
        switch(opc){
            case 1:
                promedio();
                break;
            case 2:
                areas();
                break;
            case 3:
            	int n[10];
                numeroMasGrande(n);
                break;
            case 4:
                diaDeLaSemana();
                break;
            case 5:
                convertirMayusculas();
                break;
            case 6:
                Dibuja();
                break;
            case 7:
                Datos();
                break;

        }
    }while(opc != 0);

    return 0;
}
