/* Programme de Calcul dun article hors taxe en TCC */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

char article;
float remise = 5;
float prixHT;
float prixTTC;
float tva = 19.6;

 printf("Nom de l'article : ");
 scanf("%s", &article);

 printf("Prix HT : ");
 scanf("%f", &prixHT);

 printf("Le prix hors taxe de l'article est de : %.2f Euros \n", prixHT);

 //Calcul du prix HT - 5%
 prixHT = prixHT - (prixHT * (remise / 100));

 printf("Le prix hors taxe de l'article - 5%% est de : %.2f Euros \n", prixHT);

 //Calcul de prix HT en TTC
 prixTTC = prixHT + (prixHT * (tva / 100));

    printf("Le prix total de l'article avec TVA (19.6%%) est de : %.2f Euros \n", prixTTC);

return 0;

}