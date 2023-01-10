#include <stdio.h>

int main() {
    char a[50], t, b[50], temp;
    int i, j, l, brojac = 1, brojac2 = 0;

    printf("\nUpisi recenicu:");
    gets(a);

    l = strlen(a);

    b[0] = a[0];

    for (i = 0; i < l; i++) {
        if (a[i - 1] == ' ') {
            b[brojac] = a[i];
            brojac++;
        }
    }

    for (i = 0; i < brojac - 1; i++) {
        for (j = i + 1; j < brojac; j++) {
            if (b[i] > b[j]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    a[0] = b[0];

    for (i = 0; i < l; i++) {
        if (a[i - 1] == ' ' && brojac2 != brojac || i == 0) {
            a[i] = b[brojac2];
            brojac2++;
        }
    }

    printf("\nSlozena recenic: %s", a);
}