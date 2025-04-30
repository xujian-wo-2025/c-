//#include <stdio.h>      // 执行 printf() 函数需要该库
//int main()
//{
//    printf("南昌航空大学");  //显示引号中的内容
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int testInteger = 5;
//    printf("Number = %d", testInteger);
//    return 0;
//}



#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    float f;
//    printf("Enter a number: ");
//    // %f 匹配浮点型数据
//    scanf("%f", &f);
//    printf("Value = %.1f", f);
//    return 0;
//}


// scanf()函数
//#include <stdio.h>
//
//int main() {
//    int a;
//    float b;
//    printf("Enter an integer and a float: ");
//    scanf("%d %f", &a, &b);
//    printf("You entered: %d and %.2f\n", a, b);
//    return 0;
//}


// getchar() & putchar() 函数
//#include <stdio.h>
//
//int main()
//{
//	int c;
//
//	printf("Enter a value :");
//	c = getchar();
//
//	printf("\nYou entered: ");
//	putchar(c);
//	printf("\n");
//	return 0;
//}


// gets() 和 fgets() 函数
//#include <stdio.h>
//
//int main() {
//    char str[100];
//    printf("Enter a string: ");
//    fgets(str, sizeof(str), stdin);
//    printf("You entered: %s", str);
//    return 0;
//}

// puts() 函数
//#include <stdio.h>
//
//int main() {
//    char str[] = "Hello, World!";
//    puts(str);
//    return 0;
//}

// fputs() 函数
//#include <stdio.h>
//
//int main() {
//    char str[] = "Hello, World!";
//    fputs(str, stdout);  // 输出 "Hello, World!"，不换行
//    return 0;
//}


// scanf() 和 printf() 函数
//#include <stdio.h>
//int main() {
//
//	char str[100];
//	int i;
//
//	printf("Enter a value :");
//	scanf("%s %d", str, &i);
//
//	printf("\nYou entered: %s %d ", str, i);
//	printf("\n");
//	return 0;
//}


// 文件输入与输出
#include <stdio.h>

int main() {
    FILE* file;
    file = fopen("example.txt", "w");  // 打开文件用于写入
    if (file != NULL) {
        fprintf(file, "Hello, world!\n");  // 写入文件
        fclose(file);  // 关闭文件
    }

    char buffer[100];
    file = fopen("example.txt", "r");  // 打开文件用于读取
    if (file != NULL) {
        fgets(buffer, sizeof(buffer), file);  // 使用 fgets 读取整行
        printf("Read from file: %s", buffer);
        fclose(file);  // 关闭文件
    }
    return 0;
}