#include <stdio.h>
#include <math.h> //бібліотека

int main() { //без цього бб
    double x, y, b, f; 

    printf("Введіть x: ");
    scanf("%lf", &x);
    printf("Введіть y: ");
    scanf("%lf", &y);
    printf("Введіть b: ");
    scanf("%lf", &b);

    //тут вирішуємо головну задачку

    if (x < 0) //тіпа ЯКЩО вони цей, то обчислюється задача на рядку нижче () а душками виділяємо задачки які виконує if ()
        f = 3 * x * x + 2 * y;

    if (x >= 0 && x <= 2)
        f = 4.0 / (x * x - 2 * b) + x;

    if (x > 2) 
        f = (b - sqrt(x + 2)) / x; //sqrt корінь якщо не помиляюся 

    printf("f(x) = %lf\n", f); //виводимо результат

    return 0; //кінець
}