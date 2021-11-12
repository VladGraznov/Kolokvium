#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int  a;

    do
    {
        a = get_int("a: ");
    }
    while (a <= 0);


   switch (a)
    {
        case 1:
            printf("Погано\n");
            break;
        case 2:
            printf("Незадовільно\n");
            break;
        case 3:
            printf("Задовільно\n");
            break;
        case 4:
            printf("Добре\n");
            break;
        case 5:
            printf("Відмінно\n");
            break;
        default:
            printf("Помилка\n");
            break;
    }
}