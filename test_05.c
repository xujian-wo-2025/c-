//#include <stdio.h>
//
///* ȫ�ֱ������� */
//int g;
//
//int main()
//{
//	/* �ֲ��������� */
//	int a, b;
//
//	/* ʵ�ʳ�ʼ�� */
//	a = 10;
//	b = 20;
//	g = a + b;
//
//	printf("value of a = %d, b = %d and g = %d\n", a, b, g);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	/* �ֲ��������� */
//	int a, b;
//	int c;
//
//	/* ʵ�ʳ�ʼ�� */
//	a = 10;
//	b = 20;
//	c = a + b;
//
//	printf("value of a = %d, b = %d and c = %d\n", a, b, c);
//
//	return 0;
//}


//#include <stdio.h>
//
///* ȫ�ֱ������� */
//int g = 20;
//
//int main()
//{
//	/* �ֲ��������� */
//	int g = 10;
//
//	printf("value of g = %d\n", g);
//
//	return 0;
//}



// ��ʽ����
#include <stdio.h>

/* ȫ�ֱ������� */
int a = 20;

int main()
{
    /* ���������еľֲ��������� */
    int a = 10;
    int b = 20;
    int c = 0;
    int sum(int, int);

    printf("value of a in main() = %d\n", a);
    c = sum(a, b);
    printf("value of c in main() = %d\n", c);

    return 0;
}

/* ������������ĺ��� */
int sum(int a, int b)
{
    printf("value of a in sum() = %d\n", a);
    printf("value of b in sum() = %d\n", b);

    return a + b;
}