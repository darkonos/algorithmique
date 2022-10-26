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
nbr, produit, i, j : Entier

//Initialisation
j = 0
produit = 0
Début
Ecrire "Nombre : "
Lire nbr
Pour i de 1 à nbr Faire
produit = produit * ((nbr - j) * (nbr - i))
j = j + 1
FinPour
Ecrire "Factorielle de " + nbr +"vaut : " + produit
Fin

*/

#include <stdio.h>

int main()
{
int produit, i, j, nbr;
produit = 0;
j = 0;

printf("Nombre : ");
scanf("%d", &nbr);

for (i = 1; i <= nbr; i++)
{
    produit = produit * (((nbr - j) * (nbr - i)));
    j = j + 1;
}
printf("Factorielle de %d vaut : %d \n", nbr, produit);

return 0;
}