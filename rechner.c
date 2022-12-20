#include<stdio.h>

float eingabeZahl () {
    //Eingabe der Zahlen 1 und 2, die multipliziert werden sollen
    float zahl;
    printf("\nBitte geben Sie einen Faktor ein: ");
    scanf("%f", &zahl)
    return zahl;
}

float multipliziere (float zahl1, float zahl2) {
    float ergebnis=zahl1*zahl2;
    return ergebnis;
}

void ausgabeErgebnis (float ergebnis) {
    printf("Das Ergebnis lautet %f.\n",ergebnis);
}

int main () {

	/*
	*
	*/

	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *                        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//
  
  float zahl1= eingabeZahl();
  float zahl2= eingabeZahl();
  ausgabeErgebnis(multipliziere(zahl1,zahl2));
  
 	//Ende
	printf("\n\n");
	return 0;
}
