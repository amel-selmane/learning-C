#include <stdio.h>
#include <stdlib.h>
#include <math.h> // J'importe la bibliothèque math.h pour avoir d'autres fonctions
/*
fabs = valeur absolue.
ceil = entier supérieur.
floor = entier inférieur.
pow = puissance.
sqrt = racine carrée.
sin, cos, tan = sinus, cosinus, tangente.
exp = exponentielle.
log = logarithme.
ETC...
*/


int main()
{
    printf("\n\n-----------------------------CALCULETTE-----------------------------\n\n");

    printf("\nADDITION : \n\nQuel est votre premier nombre ?\n");
    int premierNombre = 0;
    scanf("%d", &premierNombre);

    printf("\n\nMaintenant, quel est votre deuxieme nombre ?\n");
    int deuxiemeNombre = 0;
    scanf("%d", &deuxiemeNombre);

    int resultatAddition = premierNombre + deuxiemeNombre;
    printf("\n\nLe resultat de votre addition est : %d\n\n", resultatAddition);
    return 0;
}
