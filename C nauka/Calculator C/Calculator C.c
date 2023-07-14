#include <stdio.h>

int main() {
    char operator;
    double liczba1, liczba2, wynik;

    printf("Podaj operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Podaj dwie liczby: ");
    scanf("%lf %lf", &liczba1, &liczba2);

    switch (operator) {
    case '+':
        wynik = liczba1 + liczba2;
        printf("Wynik: %.2lf\n", wynik);
        break;
    case '-':
        wynik = liczba1 - liczba2;
        printf("Wynik: %.2lf\n", wynik);
        break;
    case '*':
        wynik = liczba1 * liczba2;
        printf("Wynik: %.2lf\n", wynik);
        break;
    case '/':
        if (liczba2 != 0) {
            wynik = liczba1 / liczba2;
            printf("Wynik: %.2lf\n", wynik);
        }
        else {
            printf("Nie mozna dzielic przez zero!\n");
        }
        break;
    default:
        printf("Nieprawidlowy operator!\n");
        break;
    }

    return 0;
}
