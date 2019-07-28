#include <stdio.h>
#include <stdlib.h>

// METHODE AVEC IF, ELSE IF ET ELSE :
/*int main(int argc, char *argv[])
{
    printf("\n\n-------------- Bienvenue chez Mc Amel --------------\n\n=== MENU ===\n\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc bacon\n4. Big Mac\nQuel est votre choix ?\n\n");
    int choixMenu = 0;
    scanf("%d", &choixMenu);

    if (choixMenu == 1)
        {
        printf("\nTres bon choix !!\nLe Royal Cheese : Deux tranches de cheddar fondu accompagnent son steack hache pur boeuf. Des cornichons, de l'oignon, un peu de moutarde et du ketchup!\n\n");
        } else if (choixMenu == 2){
        printf("\nTres bon choix !!\nUn pain aux graines de sesame avec un steak hache de boeuf, du cheddar fondu, de la salade, de la tomate, de l oignon, et la sauce qui lui est dediee : une sauce cremeuse a la moutarde a l ancienne.\n\n");
    } else if (choixMenu ==3){
        printf("\nC'est trop vieux comme burger, met toi a la page. Maintenant c est le 280 Bacon\n\nUn pain ciabatta cuit sur pierre , un duo de cheddar et d emmental fondus, un steak hache 100 pourcent pur boeuf,  trois tranches de bacon fume au bois de hetre, des oignons frais, deux rondelles de tomate ainsi que du ketchup et de la sauce legerement citronnee.\n\n");
    } else if (choixMenu ==4){
        printf("\nUn grand classique !!\nSes deux steaks haches, son cheddar fondu, ses oignons, ses cornichons, son lit de salade et sa sauce insimitable, font du Big Mac un burger culte et indemodable.\n\n");
    } else {
        printf("\nCe choix n existe pas, tu dois choisir de 1 a 4, pas inventer des choix dans le menu mon ami !\n\nDu coup, tu es puni de repas :D\n\n");

    }

    if (choixMenu == 1 || choixMenu == 2 || choixMenu == 3 || choixMenu == 4){
    printf("\nBon appetit mon pote !\n\n");
    }
    return 0;
} */

// ---------------------------------------------------------------------------------------------------

// METHODE AVEC SWITCH (plus courte) :
int main(int argc, char *argv[])
{
    printf("\n\n-------------- Bienvenue chez Mc Amel --------------\n\n=== MENU ===\n\n1. Royal Cheese\n2. Mc Deluxe\n3. Mc bacon\n4. Big Mac\nQuel est votre choix ?\n\n");
    int choixMenu = 0;
    scanf("%d", &choixMenu);

    switch (choixMenu)
    {
    case 1:
        printf("\nTres bon choix !!\nLe Royal Cheese : Deux tranches de cheddar fondu accompagnent son steack hache pur boeuf. Des cornichons, de l'oignon, un peu de moutarde et du ketchup!\n\n");
        break;
    case 2:
        printf("\nTres bon choix !!\nUn pain aux graines de sesame avec un steak hache de boeuf, du cheddar fondu, de la salade, de la tomate, de l oignon, et la sauce qui lui est dediee : une sauce cremeuse a la moutarde a l ancienne.\n\n");
    break;
    case 3:
        printf("\nC'est trop vieux comme burger, met toi a la page. Maintenant c est le 280 Bacon\n\nUn pain ciabatta cuit sur pierre , un duo de cheddar et d emmental fondus, un steak hache 100 pourcent pur boeuf,  trois tranches de bacon fume au bois de hetre, des oignons frais, deux rondelles de tomate ainsi que du ketchup et de la sauce legerement citronnee.\n\n");
    break;
    case 4:
        printf("\nUn grand classique !!\nSes deux steaks haches, son cheddar fondu, ses oignons, ses cornichons, son lit de salade et sa sauce insimitable, font du Big Mac un burger culte et indemodable.\n\n");
    break;
    default:
        printf("\nCe choix n existe pas, tu dois choisir de 1 a 4, pas inventer des choix dans le menu mon ami !\n\nDu coup, tu es puni de repas :D\n\n");
    break;
    };

    if (choixMenu == 1 || choixMenu == 2 || choixMenu == 3 || choixMenu == 4){
    printf("\nBon appetit mon pote !\n\n");
    }
    return 0;
}
