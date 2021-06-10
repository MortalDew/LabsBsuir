#include <stdio.h>
#include <stdlib.h>

int NotMain()
{
    int array[100];
    int n, i, c, ThisM;
    int wrong;
    printf("Enter to which number programm will work: ");
    scanf("%d", &ThisM);
    for (int j = 3; j < ThisM; j++) {
        n = j;
        c = 0;
        wrong = 0;

        while (n != 0) {
            c++;
            array[c] = n % 2;
            n = n / 2;

        }

        for (i = c; i > 0; i = i - 2) {
            if ((array[i] != array[i - 1]) || array[i] == array[i - 2]) {
                wrong = 1;
                break;
            }
        }
        if (wrong == 1) continue;
        printf("Number %d: ", j);
        for (i = c; i > 0; i--) {
            printf("%d ", array[i]);
        }
        printf("\n\n");
    }
    system("pause");
    return 0;
}
