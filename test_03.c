#include <stdio.h>

// ʹ��forѭ��ʵ�ֵ�99�˷���
void f1() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d��%d=%-2d  ", j, i, i * j);  
        }
        printf("\n");
    }
}

// ʹ��whileѭ��ʵ�ֵ�99�˷���
void f2() {
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= i) {
            printf("%d��%d=%-2d  ", j, i, i * j);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main() {
    printf("Forѭ��ʵ�ֵ�99�˷���\n");
    f1();

    printf("\nWhileѭ��ʵ�ֵ�99�˷���\n");
    f2();

    return 0;
}