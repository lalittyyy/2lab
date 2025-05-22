#include <stdio.h>

int main() {
    int gordonfreeman;

    printf("Введіть номер кайфаріка (1-13): ");
    scanf("%d", &gordonfreeman);

    switch (gordonfreeman) { //гордонфріман визначає потрібний номер в в свіч
        case 1: //а цей тіпа змінна, але в швидкому доступі щоб не робити дофіна інтів
            printf("1. Foreword - 00:13\n");
            break; //а це кінець чейво номера щоб прийти до завершення програми
        case 2:
            printf("2. Don't Stay - 03:07\n");
            break;
        case 3:
            printf("3. Somewhere I Belong - 03:33\n");
            break;
        case 4:
            printf("4. Lying from You - 02:55\n");
            break;
        case 5:
            printf("5. Hit the Floor - 02:44\n");
            break;
        case 6:
            printf("6. Easier to Run - 03:24\n");
            break;
        case 7:
            printf("7. Faint - 02:42\n");
            break;
        case 8:
            printf("8. Figure.09 - 03:17\n");
            break;
        case 9:
            printf("9. Breaking the Habit - 03:16\n");
            break;
        case 10:
            printf("10. From the Inside - 02:55\n");
            break;
        case 11:
            printf("11. Nobody's Listening - 02:58\n");
            break;
        case 12:
            printf("12. Session - 02:23\n");
            break;
        case 13:
            printf("13. Numb - 03:07\n");
            break;
        default: //якщо число неправильно воно цей
            printf("Ти иупе? невірно!\n");
    }

    return 0;
}