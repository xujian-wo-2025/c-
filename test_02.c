#include<stdio.h>

// 通过输入一个数字来判断它是否为奇数或偶数
fun1(int a) {
	if (a % 2 == 0) {
		printf("为偶数");
	}
	else
	{
		printf("为奇数");
	}
}

// 判断星期几
fun2(int a) {
    switch (a)
    {
    case 1:printf("Monday\n");
        break;
    case 2:printf("Tuesday\n");
        break;
    case 3:printf("Wednesday\n");
        break;
    case 4:printf("Thursday\n");
        break;
    case 5:printf("Friday\n");
        break;
    case 6:printf("Saturday\n");
        break;
    case 7:printf("Sunday\n");
        break;
    default:printf("error\n");
    }
}
int main() {
	int num;

	printf("输入一个数字 : ");
	scanf_s("%d", &num);
	fun1(num);
    int a;
    printf("\ninput integer number: ");
    scanf_s("%d", &a);
    fun2(a);
}