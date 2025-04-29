//#include <stdio.h>
//
//int main()
//{
//    int var_runoob = 10;
//    int* p;              // 定义指针变量
//    p = &var_runoob;
//
//    printf("var_runoob 变量的地址： %p\n", p);
//    return 0;
//}



// 使用指针
//#include <stdio.h>
//
//int main()
//{
//	int  var = 20;   /* 实际变量的声明 */
//	int* ip;        /* 指针变量的声明 */
//
//	ip = &var;  /* 在指针变量中存储 var 的地址 */
//
//	printf("var 变量的地址: %p\n", &var);
//
//	/* 在指针变量中存储的地址 */
//	printf("ip 变量存储的地址: %p\n", ip);
//
//	/* 使用指针访问值 */
//	printf("*ip 变量的值: %d\n", *ip);
//
//	return 0;
//}


// c语言中的NULL指针
#include <stdio.h>

int main()
{
	int* ptr = NULL;

	printf("ptr 的地址是 %p\n", ptr);

	return 0;
}