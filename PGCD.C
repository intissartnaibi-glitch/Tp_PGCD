 
 Tp_PGCD
♡ 1.définition : le PGCD de deux nombres est le plus grand nombre qui divise les deux sans reste .

♡ 2. algorithme d’euclide : algorithme algorithme d’euclide variable a,b ,PGCD:entier début Ecrire("Entrez deux nombres entiers") lire (a ,b) Tant que b≠0 r recoit a mod b a recoit b b recoit r Écrire ("le PGCD est : ",a) fin

♡ 3 .exemples :

a=90 ,b=60
90÷60=1 est reste est 30 60÷30=2 est le reste =0 ■ PGCD de 90÷60 est 30

a=40,b=36
40÷36=1 est le reste =4 36÷4=9 est le reste =0 ■ PGCD de 40÷36 est 4

a=100 , b=32
100÷32=3 est le reste =4 32÷4=8 est le rest =0 ■ PGCD de 100÷32 est 4
●●●●
4. la programmation de PGCD par language c:

#include <stdio.h>

int main() {
    int a, b, r;//déclaration des variables

    printf("Entrez deux nombres entiers: ");
    scanf("%d %d", &a, &b);
//programme pour le  PGCD de deux nombres 
    while (b != 0) {
        r = a % b;//le reste
        a = b;//permutation de b dans a 
        b = r;//permutation de r dans b
    }

    printf("PGCD = %d\n", a);
    return 0;
} 
