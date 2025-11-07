 

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
          D. la programmation de PGCD par language c:



#include <stdio.h>

int pgcd_simple(int a, int b) {
    int r;
    printf("\n--- Étapes du PGCD (division euclidienne) ---\n");
    while (b != 0) {
        r = a % b;
        printf("%d = %d × (%d ÷ %d) + %d\n", a, b, a, b, r);
        a = b;
        b = r;
    }
    return a;
}

// ---------- Euclide étendu( pou trover  coefficients de Bézout) ----------
int euclide_etendu(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int d = euclide_etendu(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return d;
}

int main() {

    int a, b, c;
    printf("Entrez a, b et c (ax + by = c) : ");
    scanf("%d %d %d", &a, &b, &c);
    int d = pgcd_simple(a, b);
    printf("\nPGCD(%d, %d) = %d\n", a, b, d);
    if (c % d != 0) {
        printf("\nComme %d ne divise pas %d → Pas de solution entiere.\n", d, c);
        return 0;
    } else {
        printf("\nComme %d divise %d → Il existe des solutions.\n", d, c);
    }

    int x0, y0;
    euclide_etendu(a, b, &x0, &y0);

    printf("\n--- Coefficients de Bézout ---\n");
    printf("%d(%d) + %d(%d) = %d\n", a, x0, b, y0, d);
    int xp = x0 * (c / d);
    int yp = y0 * (c / d);

    printf("\n--- Solution Particuliere ---\n");
    printf("x_p = %d × (%d/%d) = %d\n", x0, c, d, xp);
    printf("y_p = %d × (%d/%d) = %d\n", y0, c, d, yp);
    printf("\nSolution particulière : (x, y) = (%d, %d)\n", xp, yp);

  
    printf("\n--- Solution Generale ---\n");
    printf("(x, y) = (%d + %d*k , %d - %d*k)   ,  k ∈ Z\n", xp, b/d, yp, a/d);

    return 0;
}





♡E.
>>>>>conclusion:
Dans ce TP, j’ai appris à rédiger l’algorithme d’Euclide étape par étape en utilisant la boucle « Tant Que » en algorithmique, ainsi qu’à l’implémenter en langage C. Cette expérience m’a permis de mieux comprendre le lien entre les mathématiques et la programmation.

 