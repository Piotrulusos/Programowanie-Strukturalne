#include <stdio.h>

int main() {
    int a, b;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &a, &b);
    if (a >= b) {
        printf("Wieksza liczba to %d\n", a);
    } else {
        printf("Wieksza liczba to %d\n", b);
    }
    return 0;
}
