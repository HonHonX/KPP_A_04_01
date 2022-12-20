#include<stdio.h>

float eingabeZahl () {
    //Eingabe der Zahlen 1 und 2, die multipliziert werden sollen
    float zahl;
    printf("\nBitte geben Sie einen Faktor ein: ");
    scanf("%f", &zahl)
    return zahl;
}

float multipliziere (float zahl1, float zahl2) {
    //Berechnung der Multiplikation
    float ergebnis=zahl1*zahl2;
    return ergebnis;
}

void ausgabeErgebnis (float ergebnis) {
    //Der Paramter, der übergeben wird, wird ausgegeben
    printf("Das Ergebnis lautet %f.2\n",ergebnis);
}

int main () {

	/*
	* Über die Eingabe von zwei Zahlen wird eine Multiplikation ausgeführt und ausgegeben
	*/

	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *  Multiplikation        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Berechnung
      	float zahl1= eingabeZahl();
       	float zahl2= eingabeZahl();
       	ausgabeErgebnis(multipliziere(zahl1,zahl2));
  
 	//Ende
	printf("\n\n");
	return 0;
}
