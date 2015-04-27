/*
* Tabla de conversion de valores celsius-fahrenheit
* Joho Braian Matias
* 20/04/2015
*/
#include <stdio.h>

int main()
{
int Ce;
for (Ce = 0; Ce <= 300; Ce = Ce + 20)
{
printf("%3d %6.1f\n", Ce, (Ce*1.8)+32);
}
	system ("pause");
	return 0;
}

