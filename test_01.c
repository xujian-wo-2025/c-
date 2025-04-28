#include <stdio.h>

// ���������
fun1() {
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("Line 1 - c ��ֵ�� %d\n", c);
	c = a - b;
	printf("Line 2 - c ��ֵ�� %d\n", c);
	c = a * b;
	printf("Line 3 - c ��ֵ�� %d\n", c);
	c = a / b;
	printf("Line 4 - c ��ֵ�� %d\n", c);
	c = a % b;
	printf("Line 5 - c ��ֵ�� %d\n", c);
	c = a++;  // ��ֵ���ټ� 1 ��c Ϊ 21��a Ϊ 22
	printf("Line 6 - c ��ֵ�� %d\n", c);
	c = a--;  // ��ֵ���ټ� 1 ��c Ϊ 22 ��a Ϊ 21
	printf("Line 7 - c ��ֵ�� %d\n", c);
}


// a++��++a������
fun2() {
	int c;
	int a = 10;
	c = a++;
	printf("�ȸ�ֵ�����㣺\n");
	printf("Line 1 - c ��ֵ�� %d\n", c);
	printf("Line 2 - a ��ֵ�� %d\n", a);
	a = 10;
	c = a--;
	printf("Line 3 - c ��ֵ�� %d\n", c);
	printf("Line 4 - a ��ֵ�� %d\n", a);

	printf("�������ֵ��\n");
	a = 10;
	c = ++a;
	printf("Line 5 - c ��ֵ�� %d\n", c);
	printf("Line 6 - a ��ֵ�� %d\n", a);
	a = 10;
	c = --a;
	printf("Line 7 - c ��ֵ�� %d\n", c);
	printf("Line 8 - a ��ֵ�� %d\n", a);
}

// ��ϵ�����
fun3() {
	int a = 21;
	int b = 10;
	int c;

	if (a == b)
	{
		printf("Line 1 - a ���� b\n");
	}
	else
	{
		printf("Line 1 - a ������ b\n");
	}
	if (a < b)
	{
		printf("Line 2 - a С�� b\n");
	}
	else
	{
		printf("Line 2 - a ��С�� b\n");
	}
	if (a > b)
	{
		printf("Line 3 - a ���� b\n");
	}
	else
	{
		printf("Line 3 - a ������ b\n");
	}
	/* �ı� a �� b ��ֵ */
	a = 5;
	b = 20;
	if (a <= b)
	{
		printf("Line 4 - a С�ڻ���� b\n");
	}
	if (b >= a)
	{
		printf("Line 5 - b ���ڻ���� a\n");
	}
}


// �߼������
fun4() {
	int a = 5;
	int b = 20;
	int c;

	if (a && b)
	{
		printf("Line 1 - ����Ϊ��\n");
	}
	if (a || b)
	{
		printf("Line 2 - ����Ϊ��\n");
	}
	/* �ı� a �� b ��ֵ */
	a = 0;
	b = 10;
	if (a && b)
	{
		printf("Line 3 - ����Ϊ��\n");
	}
	else
	{
		printf("Line 3 - ����Ϊ��\n");
	}
	if (!(a && b))
	{
		printf("Line 4 - ����Ϊ��\n");
	}
}

// ��ֵ�����
fun5() {
	int a = 21;
	int c;

	c = a;
	printf("Line 1 - =  �����ʵ����c ��ֵ = %d\n", c);

	c += a;
	printf("Line 2 - += �����ʵ����c ��ֵ = %d\n", c);

	c -= a;
	printf("Line 3 - -= �����ʵ����c ��ֵ = %d\n", c);

	c *= a;
	printf("Line 4 - *= �����ʵ����c ��ֵ = %d\n", c);

	c /= a;
	printf("Line 5 - /= �����ʵ����c ��ֵ = %d\n", c);

	c = 200;
	c %= a;
	printf("Line 6 - %%= �����ʵ����c ��ֵ = %d\n", c);

	c <<= 2;
	printf("Line 7 - <<= �����ʵ����c ��ֵ = %d\n", c);

	c >>= 2;
	printf("Line 8 - >>= �����ʵ����c ��ֵ = %d\n", c);

	c &= 2;
	printf("Line 9 - &= �����ʵ����c ��ֵ = %d\n", c);

	c ^= 2;
	printf("Line 10 - ^= �����ʵ����c ��ֵ = %d\n", c);

	c |= 2;
	printf("Line 11 - |= �����ʵ����c ��ֵ = %d\n", c);

}

// ���������
fun6() {
	int a = 4;
	short b;
	double c;
	int* ptr;

	/* sizeof �����ʵ�� */
	printf("Line 1 - ���� a �Ĵ�С = %lu\n", sizeof(a));
	printf("Line 2 - ���� b �Ĵ�С = %lu\n", sizeof(b));
	printf("Line 3 - ���� c �Ĵ�С = %lu\n", sizeof(c));

	/* & �� * �����ʵ�� */
	ptr = &a;    /* 'ptr' ���ڰ��� 'a' �ĵ�ַ */
	printf("a ��ֵ�� %d\n", a);
	printf("*ptr �� %d\n", *ptr);

	/* ��Ԫ�����ʵ�� */
	a = 10;
	b = (a == 1) ? 20 : 30;
	printf("b ��ֵ�� %d\n", b);

	b = (a == 10) ? 20 : 30;
	printf("b ��ֵ�� %d\n", b);
}
int main() {
	printf("���������: \n");
	fun1();
	printf("\n");
	printf("a++��++a������: \n");
	fun2();
	printf("\n");
	printf("��ϵ�����: \n");
	fun3();
	printf("\n");
	printf("�߼������: \n");
	fun4();
	printf("\n");
	printf("��ֵ�����: \n");
	fun5();
	printf("\n");
	printf("���������: \n");
	fun6();

}