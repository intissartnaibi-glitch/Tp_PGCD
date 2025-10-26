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
