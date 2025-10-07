#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "RUS");
    double x = -2.235e-2;
    double y = 2.23;
    double z = 15.221;

    double numerator = exp(fabs(x - y)) * pow(fabs(x - y), x + y);
    double denominator = atan(x) + atan(z);

    double phi = numerator / denominator + cbrt(pow(x, 6) + pow(log(y), 2));

    printf("=== Вычисление значения ф ===\n");
    printf("Исходные данные:\n");
    printf("x = %.6f\n", x);
    printf("y = %.3f\n", y);
    printf("z = %.3f\n\n", z);

    printf("Результат вычисления:\n");
    printf("ф = %.3f\n", phi);

    return 0;
}
