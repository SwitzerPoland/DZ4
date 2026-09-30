#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int c1, c2;
int rez;

void check() 
{
    rez = ((c1 % 2 == 0) != (c2 % 2 == 0));
    return rez;
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    printf(" СИСТЕМА КОНТРОЛЯ ДВЕРИ \n");
    printf("Введите коды доступа (по лицу 1 и по карте 2): ");
    scanf("%d %d", &c1, &c2);
    check();
    printf("Проход (1 - разрешён, 0 - не разрешён): %d\n", rez);
    return 0;
}

/*
int main() {
    int c1, c2;
    int rez;
    printf(" СИСТЕМА КОНТРОЛЯ ДВЕРИ \n");
    printf("Введите коды доступа (по лицу 1 и по карте 2): ");
    scanf("%d %d", &c1, &c2);
    rez = ((c1 % 2 == 0) != (c2 % 2 == 0));
    printf("Проход (1 - разрешён, 0 - не разрешён): %d\n", rez);
    return 0;
    }
*/