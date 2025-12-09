 

 Tp_PGCD


     ♡ A.définition : le PGCD de deux nombres est le plus grand nombre qui divise les deux sans reste .
L’algorithme d’Euclide permet de calculer le Plus Grand Commun Diviseur (PGCD) de deux entiers naturels non nuls.
Voici son énoncé :

---
♡B.
///Principe de l’algorithme d’Euclide

Soient  a  et  b  deux entiers, avec  a >=b> 0.
Le PGCD de  a  et  b  est obtenu par divisions successives :

1. On effectue la division euclidienne de  a  par  b  :

a = b×q + r avec 0<= r < b

1. Si  r = 0 , alors  PGCD(a, b) = b .
2. Si  r ≠0 , on recommence avec  b  et  r  :

PGCD(a, b) = PGCD(b, r)

On arrête jusqu’à obtenir un reste nul.
   _____
       ♡ 2. algorithme d’euclide :


 algorithme d’euclide 
variable a,b ,PGCD:entier
 début
 Ecrire("Entrez deux nombres entiers")
 lire (a ,b) 
Tant que b≠0 faire
 r recoit a mod b 
a recoit b
 b recoit r
fin tant que
 Écrire ("le PGCD est : ",a)
fin

    _______
                     ♡ C .exemples :

  ## exemple 1: a=90 ,b=60
90=60×1+30
60=30×2+0
■ PGCD(90,60)=30

  ###exemple 2 :a=40,b=36
40=36×1+4
36=4×9+0
■ PGCD(40,36)=4

       #### exemple 3 :=100 , b=32
100=32×3+4
32=4×8+0
■PGCD(100,32)=4


●●●●
          


♡E.
>>>>>conclusion:
Dans ce TP, j’ai appris à rédiger l’algorithme d’Euclide étape par étape en utilisant la boucle « Tant Que » en algorithmique, ainsi qu’à l’implémenter en langage C. Cette expérience m’a permis de mieux comprendre le lien entre les mathématiques et la programmation.

 