/*
Exercice 5.7
Ecrire un algorithme qui demande un nombre de départ, et qui calcule sa factorielle.
NB : la factorielle de 8, notée 8!, vaut
1 x 2 x 3 x 4 x 5 x 6 x 7 x 8

Rappel sur la Factorielle
........................
​La notation factorielle, notée n! est la façon d'écrire le produit de tous les entiers positifs 
inférieurs ou égaux à un nombre n, où n est un nombre naturel.

Algorithme Factorielle

//Variable
nbr, i, f : Entier

//Initialisation
nbr <- 0
i <- 0
f <- 1

Début

Afficher "Nombre de départ"
Lire nbr
Pour i de 2 à nbr Faire
f <- f * i
FinPour
Afficher "La factorielle de " +nbr +"vaut" +f

Fin

*/

#include <stdio.h>

int main()
{
int i, nbr, f;
f = 1;

printf("Nombre de depart : ");
scanf("%d", &nbr);

for(i = 2; i <= nbr; i++)
{
    f = f * i;
}

printf("La factorielle de %d vaut : %d \n", nbr, f);

return 0;
}