#include <stdio.h>

int main()
{
	int numer1;
	int numero2;
	int suma = 0;
	int resta = 0;
	int divicion = 0;
	int multiplicacion = 0;
	printf_s("introduce numero1:");
	scanf_s("%i", & numer1);
	printf_s("introduce numero2:");
	scanf_s("%i", & numero2);
	suma = numer1 + numero2;
	resta = numer1 - numero2;
	divicion = numer1 / numero2;
	multiplicacion = numer1 * numero2;
	printf_s("\nla suma es %i",suma);
	printf_s("\nla resta es %i", resta);
	printf_s("\nla divi es %i", divicion);
	printf_s("\nla multipli es %i", multiplicacion);


}