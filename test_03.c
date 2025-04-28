#include <stdio.h>

// 使用for循环实现的99乘法表
void f1() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d×%d=%-2d  ", j, i, i * j);  
        }
        printf("\n");
    }
}

// 使用while循环实现的99乘法表
void f2() {
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= i) {
            printf("%d×%d=%-2d  ", j, i, i * j);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main() {
    printf("For循环实现的99乘法表：\n");
    f1();

    printf("\nWhile循环实现的99乘法表：\n");
    f2();

    return 0;
}