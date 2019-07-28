#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombreDeVies = 5, niveau = 1;
    printf("\nIl me reste %d vies.\n\nEt je suis au niveau %d\n", nombreDeVies, niveau);
    // const age = 65;
    printf("\nAhhh mais attend !! Quel age as-tu ?\n");
    /*J'affecte la valeur 0 lors de la déclaration car je veux avoir un nombre connu
    et pas l'ancienne valeur de l'adresse de la RAM.*/
    int age = 0;
    scanf("%d", &age);
    printf("\n\nJe t'annonce que tu as %d ans mon pote !\n", age);

    int ageDe2019 = age + 2;
    printf("\n\nEt en 2020 tu auras %d ans.\n\n",ageDe2019);

    return 0;
}
