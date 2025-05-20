#include <stdio.h>
#include <math.h>

int main() {

    const int a = 1;
    const int b = 12;
    const int c = 26;

    //цей блочок уравнюэ все
    double olala = a + 4 * b - pow(c, 2); //pow це в квадраті 
    double oraora = 2 * a * b * c;

    //а тут обчисоюється ігрік
    double y = olala / oraora;
    
    //результати
    printf("Обчислення за формулою йо: y = (a + 4b - c^2) / (2abc)\n");
    printf("Дано йо: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Результат йо: y = %.6f\n", y);

    return 0; //всьо
}