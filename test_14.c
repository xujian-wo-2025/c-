//#include <stdio.h>      // ִ�� printf() ������Ҫ�ÿ�
//int main()
//{
//    printf("�ϲ����մ�ѧ");  //��ʾ�����е�����
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
//    // %f ƥ�両��������
//    scanf("%f", &f);
//    printf("Value = %.1f", f);
//    return 0;
//}


// scanf()����
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


// getchar() & putchar() ����
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


// gets() �� fgets() ����
//#include <stdio.h>
//
//int main() {
//    char str[100];
//    printf("Enter a string: ");
//    fgets(str, sizeof(str), stdin);
//    printf("You entered: %s", str);
//    return 0;
//}

// puts() ����
//#include <stdio.h>
//
//int main() {
//    char str[] = "Hello, World!";
//    puts(str);
//    return 0;
//}

// fputs() ����
//#include <stdio.h>
//
//int main() {
//    char str[] = "Hello, World!";
//    fputs(str, stdout);  // ��� "Hello, World!"��������
//    return 0;
//}


// scanf() �� printf() ����
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


// �ļ����������
#include <stdio.h>

int main() {
    FILE* file;
    file = fopen("example.txt", "w");  // ���ļ�����д��
    if (file != NULL) {
        fprintf(file, "Hello, world!\n");  // д���ļ�
        fclose(file);  // �ر��ļ�
    }

    char buffer[100];
    file = fopen("example.txt", "r");  // ���ļ����ڶ�ȡ
    if (file != NULL) {
        fgets(buffer, sizeof(buffer), file);  // ʹ�� fgets ��ȡ����
        printf("Read from file: %s", buffer);
        fclose(file);  // �ر��ļ�
    }
    return 0;
}