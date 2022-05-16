
/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 24/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa 
Materia: Programación Estructurada 
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programación Estructurada<br>
Muestra el uso de:
  
    -Variables enteras y flotantes
    -printf para mostrar varias variables
    -scanf
    -El uso de include para las librerias
    -do-while
    -Contador
    -Condicionales
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
int main(){
	//Declaracion de variables
	float cal, porcentaje_ap, prom, suma=0;
	int i=0, aprobadas=0, reprobadas=0;
	//Proceso
	//Ciclo que prepite mientras que las calificaciones no sean negativas
	do {
		printf("Introduzca la calificacion: ");
		scanf("%f",&cal);
		//validacion de cal que sea entre 1-10
		if (cal>=0 && cal<=10){
			i++; //Cuenta el número de calificaciones validas
			suma=suma+cal;
			if (cal<7){
				reprobadas++;
			}
			else {
				aprobadas++;
			}
		}
		else {
			printf("Calificacion invalida!!!\n");
		}
	}while(cal>=0);
	//Calculo de promedio y porcentaje de aprobacion, una vez que se introdujeron todas las calificaciones
	prom=suma/i;
	porcentaje_ap=(float)aprobadas/i*100.0;
	//Salida
	printf("Total de calificacion introducidas: %d\n",i);
	printf("Promedio: %.1f\n",prom);
	printf("Calificaciones aprobatorias: %d\n", aprobadas);
	printf("Calificaciones reprobatorias: %d\n", reprobadas);
	printf("Porcentaje de aprobacion: %.2f%%", porcentaje_ap);
	return 0;
}
