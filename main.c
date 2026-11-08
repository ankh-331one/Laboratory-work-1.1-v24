/*
 * Лабораторная 1.1: Вычисления по формулам
 * Copyright (c) 2026 ankh-331one
 *
 * Licensed under the MIT License; see LICENSE file for details.
 */
/**Написать приведённую формулу по правилам языка программирования.
Для проверки использовать x = 0,5.*/

#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
    setlocale(0, "");
    setlocale(LC_NUMERIC, "C");

    double x , y;
    int k = 0;

    printf("Введите значение х: ");
    k = scanf("%lf", &x);

    while (x < 0 || k != 1){
            scanf("%*[^\n]");
            printf("\nОШИБКА! Значение х должно быть больше или равно 0!\nВведите другое значение х: ");
            k = scanf("%lf", &x);}

    printf("\nВведено значение x = %g \n\n", x);

    y = 1.0/3 * pow(exp(6.3+sqrt(x)),1.0/7)*fabs(cos(2.0*x/3)-x);

    printf("При заданном х = %g y = %.5f\n", x, y);

    return 0;
}

