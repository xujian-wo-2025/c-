#include<stdio.h>

// ͨ������һ���������ж����Ƿ�Ϊ������ż��
fun1(int a) {
	if (a % 2 == 0) {
		printf("Ϊż��");
	}
	else
	{
		printf("Ϊ����");
	}
}

// �ж����ڼ�
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

	printf("����һ������ : ");
	scanf_s("%d", &num);
	fun1(num);
    int a;
    printf("\ninput integer number: ");
    scanf_s("%d", &a);
    fun2(a);
}