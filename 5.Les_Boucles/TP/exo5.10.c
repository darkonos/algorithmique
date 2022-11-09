/* Exercice 5.10
Lire la suite des prix (en euros entiers et terminée par zéro) des achats d’un client.
Calculer la somme qu’il doit, lire la somme qu’il paye, et simuler la remise de la monnaie 
en affichant les textes "10 Euros", "5 Euros" et "1 Euro" autant de fois qu’il y a de coupures
de chaque sorte à rendre.

//Décomposition du problème
1. Demander à l'utilisateur d'entrer une série de prix (en entier terminé par un zéro) variable : prixEntre
2. Calculer la somme des prix entrés par l'utilisateur. variable : sommePrixentre
3. Lire le montant versé par l'utilisateur pour régler les prix entrés. variable : montantVerse
4. Calculer le montant restant de la somme versé. reste <- montantVerse - sommePrixEntre
5. Simuler la remise de la monnaie. Variables : remise10E, remise5E, remise1E
6. Afficher la simulation

//Algo suiteDesPrix

//Variables
prixEntre, sommePrixEntre, montantVerse, reste, remise10e, remise5e, remise1e : en entier
//initialisation des variables
sommePrixEntre <- 0
prixEntre <- 1

Début
TantQue prixEntre <> 0
Afficher "Entrez un prix : "
Lire prixEntre
sommePrixEntre <- sommePrixEntre + prixEntre
FinTantQue
Afficher "Vous devez : ", +sommePrixEntre

Afficher "Entrez le montant : "
Lire montantVerse
reste <- montantVerse - sommePrixEntre

//Simulation Remise de la monnaie

//Pour les billets de 10€
nbr10E ← 0
TantQue Reste >= 10
  nbr10E ← nbr10E + 1
  reste ← reste – 10
FinTantQue

//Pour les billets de 5€
nbr5E ← 0
Si reste >= 5
  nbr5E ← 1
  reste ← reste – 5
FinSi

Ecrire "Rendu de la monnaie :"
Ecrire "Billets de 10 E : ", nbr10E
Ecrire "Billets de  5 E : ", nbr5E
Ecrire "Pièces de 1 E : ", reste
Fin







