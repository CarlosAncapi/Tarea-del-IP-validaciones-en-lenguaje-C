//llamado a las librerias que se utilizaran en mi programa
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//método principal
int main () {
	
	//definicion de variables 
	char palabra[10];
	int numero,dd,mm,yyyy,aux;
	
	printf("---------------------------trabajo Eva 1--------------------------- \n\n");
	
	//uso bucles do while porque asi hago que ejecute el codigo y despues valide la condicion del bucle
	do{
		aux=1;
		
		//muestro mensaje al usuario con las condiciones y espero que ingrese lo solicitado por teclado
		printf("Ingrese una palabra de 10 letras como maximo: ");
		scanf("%s",&palabra);
		
		//strlen sirve para conocer el largo de caracteres de la cadena
		int longitud= strlen(palabra);
		
		//printf("%d",longitud); este printf me devuelve la cantidad de letras que ingrese
		
		//validacion del largo de caracteres admitidos
		if(longitud>=1 && longitud<=10){
			printf("La palabra que escribio es: " "%s", palabra);
			//con sumar 1 a la variable aux rompo la condicion del "do while"
			aux++;
			printf("\n\n");	
		}else{
			printf("Ha ingresado un valor incorrecto, intente nuevamente: \n\n");
		}
	}while(aux==1);
	
	
	do{
		//vuelvo a darle el valor de 1 a la variable aux
		aux=1;
		
		//muestro mensaje al usuario con las condiciones y espero que ingrese lo solicitado por teclado
		printf("Ingrese un numero en el rango de 0 a 99: ");
		scanf("%d",&numero);
		
		//validacion del rango admitido
		if(numero>=0 && numero<=99){
			printf("El numero ingresado es: " "%d", numero);
			aux++;
			printf("\n\n");
		}else{
			printf("Ha ingresado un valor incorrecto, intente nuevamente: \n\n");	
		}
	}while(aux==1);
	
	
	do{
		//vuelvo a darle el valor de 1 a la variable aux
		aux=1;
		
		//muestro mensaje al usuario con las condiciones y espero que ingrese lo solicitado por teclado
		printf("Ingrese dia de nacimiento (del 1 al 31): \n");
		scanf("%d", &dd);
		
		//validacion del rango admitido
		if(dd>=1 && dd<=31){
			aux++;
			printf("\n\n");
		}else{
			printf("Ha ingresado un valor incorrecto, intente nuevamente: \n\n");	
		}
	}while(aux==1);
	
	
	do{
		//vuelvo a darle el valor de 1 a la variable aux
		aux=1;
		
		//muestro mensaje al usuario con las condiciones y espero que ingrese lo solicitado por teclado
		printf("Ingrese mes de nacimiento (del 1 al 12): \n");
		scanf("%d", &mm);
		
		//validacion del rango admitido
		if(mm>=1 && mm<=12){
			aux++;
			printf("\n\n");
		}else{
			printf("Ha ingresado un valor incorrecto, intente nuevamente: \n\n");
		}
	}while(aux==1);
	
	
	do{
		//vuelvo a darle el valor de 1 a la variable aux
		aux=1;
		
		//muestro mensaje al usuario con las condiciones y espero que ingrese lo solicitado por teclado
		printf("Ingrese anno de nacimiento (desde 1900 a 2023): \n");
		scanf("%d", &yyyy);
		
		//validacion del rango admitido
		if(yyyy>=1900 && yyyy<=2023){
			aux++;
			printf("\n\n");
		}else{
			printf("Ha ingresado un valor incorrecto, intente nuevamente: \n\n");
		}
	}while(aux==1);
	
	//muestro la fecha de nacimiento con valores solicitados anteriormente
	printf("La fecha de nacimiento ingresada es el dia: " "%d", dd);
	printf(", del mes: " "%d", mm);
	printf(", del anno : " "%d", yyyy);
	printf("\n\n");
	
	printf("------------------------Termino del programa------------------------ \n\n");
	
	
	return 0;
}
