/*
Tabla de conversion de valores fahrenheit-celsius
* Joho Braian Matias
* 13/04/2015
*/
#include <stdio.h>
int main(){
float fa, ce;
	float inferior, superior, siguiente;
	inferior = 0;
	superior=300;
	siguiente=20;
	fa=inferior;
	while (fa <= superior){
		ce = (5.0/9.0)*(fa-32.0);
		printf("%3.0f %6.1f\n", fa,ce);
		fa=fa+siguiente;
	}
		system ("pause");
		return 0;
}


