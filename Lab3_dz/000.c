#include <stdio.h>
#include <locale.h>

int main() 

{
    setlocale(LC_CTYPE, "RUS");
    double S, P, D, result;

    printf("Введите сумму вклада: ");
    scanf_s("%lf", &S);

    printf("Введите процентную ставку: ");
    scanf_s("%lf", &P);

    D = S * P / 100;
    result = S + D;

    printf("Доход: %.2lf\n", D);
    printf("Итоговая сумма: %.2lf", result);

}