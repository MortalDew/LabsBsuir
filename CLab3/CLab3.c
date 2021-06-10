#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
//activate

struct Point {
    int x;
    int y;
};
void main()
{
    int size = 10;
    int sea[10][10];
    bool edit = true;
    srand(time(NULL));
    rand();
    Point p = {0,0}; // координата носа
    Point t = {0,0}; // определяем ориентацию корабля
    do
    {
        bool edit = true; // смогли поставить корабль
        if ((rand() % 2) == 0)
            t = { 1, 0 }; // горизонтально
        else 
            t = { 0, 1 }; // вертикально

        Point p = { rand() % (10 - t.x * (size - 1)+1),
            rand() % (10 - t.y * (size - 1)+1) };
        printf("pxy=%i,%i", p.x, p.y);
        printf("dtxy=%i,%i", t.x, t.y);
        system("pause");
        for (int i = p.x * t.x + p.y * t.y - 1;
            i < (p.x * t.x + p.y * t.y + size + 1);
            i++)
        {
            printf("Check left= %i", p.x * t.x + p.y * t.y - 1);
            printf("Check rihht= %i", (p.x * t.x + p.y * t.y + size + 1));
            system("pause"); 
            if (
                sea[i * t.x + p.x]
                [i * t.y + p.y] == 1 ||
                sea[i * t.x + p.x + t.y]
                [i * t.y + p.y + t.x] == 1 ||
                sea[i * t.x + p.x - t.y]
                [i * t.y + p.y - t.x] == 1
                ) // проверка соседних клеток
            {
                edit = false; // не смогли поставить корабль
                break;
            }
        }
    } while (edit);

    for (int i = p.x * t.x + p.y * t.y;
        i < (p.x * t.x + p.y * t.y + size);
        i++) // установка корабля
    {
        sea[i * t.x + p.x]
           [i * t.y + p.y] = 1;
        printf("%i", 3);
    }

    for (int i = 0; i <= 10; i++)
        for (int j = 0; j <= 10; j++)
            printf("%i", 1);

}
