//#include <stdio.h>
//
//int main()
//{
//    int var_runoob = 10;
//    int* p;              // ����ָ�����
//    p = &var_runoob;
//
//    printf("var_runoob �����ĵ�ַ�� %p\n", p);
//    return 0;
//}



// ʹ��ָ��
//#include <stdio.h>
//
//int main()
//{
//	int  var = 20;   /* ʵ�ʱ��������� */
//	int* ip;        /* ָ����������� */
//
//	ip = &var;  /* ��ָ������д洢 var �ĵ�ַ */
//
//	printf("var �����ĵ�ַ: %p\n", &var);
//
//	/* ��ָ������д洢�ĵ�ַ */
//	printf("ip �����洢�ĵ�ַ: %p\n", ip);
//
//	/* ʹ��ָ�����ֵ */
//	printf("*ip ������ֵ: %d\n", *ip);
//
//	return 0;
//}


// c�����е�NULLָ��
#include <stdio.h>

int main()
{
	int* ptr = NULL;

	printf("ptr �ĵ�ַ�� %p\n", ptr);

	return 0;
}