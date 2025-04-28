#include <stdio.h>

// 算术运算符
fun1() {
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("Line 1 - c 的值是 %d\n", c);
	c = a - b;
	printf("Line 2 - c 的值是 %d\n", c);
	c = a * b;
	printf("Line 3 - c 的值是 %d\n", c);
	c = a / b;
	printf("Line 4 - c 的值是 %d\n", c);
	c = a % b;
	printf("Line 5 - c 的值是 %d\n", c);
	c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
	printf("Line 6 - c 的值是 %d\n", c);
	c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
	printf("Line 7 - c 的值是 %d\n", c);
}


// a++与++a的区别
fun2() {
	int c;
	int a = 10;
	c = a++;
	printf("先赋值后运算：\n");
	printf("Line 1 - c 的值是 %d\n", c);
	printf("Line 2 - a 的值是 %d\n", a);
	a = 10;
	c = a--;
	printf("Line 3 - c 的值是 %d\n", c);
	printf("Line 4 - a 的值是 %d\n", a);

	printf("先运算后赋值：\n");
	a = 10;
	c = ++a;
	printf("Line 5 - c 的值是 %d\n", c);
	printf("Line 6 - a 的值是 %d\n", a);
	a = 10;
	c = --a;
	printf("Line 7 - c 的值是 %d\n", c);
	printf("Line 8 - a 的值是 %d\n", a);
}

// 关系运算符
fun3() {
	int a = 21;
	int b = 10;
	int c;

	if (a == b)
	{
		printf("Line 1 - a 等于 b\n");
	}
	else
	{
		printf("Line 1 - a 不等于 b\n");
	}
	if (a < b)
	{
		printf("Line 2 - a 小于 b\n");
	}
	else
	{
		printf("Line 2 - a 不小于 b\n");
	}
	if (a > b)
	{
		printf("Line 3 - a 大于 b\n");
	}
	else
	{
		printf("Line 3 - a 不大于 b\n");
	}
	/* 改变 a 和 b 的值 */
	a = 5;
	b = 20;
	if (a <= b)
	{
		printf("Line 4 - a 小于或等于 b\n");
	}
	if (b >= a)
	{
		printf("Line 5 - b 大于或等于 a\n");
	}
}


// 逻辑运算符
fun4() {
	int a = 5;
	int b = 20;
	int c;

	if (a && b)
	{
		printf("Line 1 - 条件为真\n");
	}
	if (a || b)
	{
		printf("Line 2 - 条件为真\n");
	}
	/* 改变 a 和 b 的值 */
	a = 0;
	b = 10;
	if (a && b)
	{
		printf("Line 3 - 条件为真\n");
	}
	else
	{
		printf("Line 3 - 条件为假\n");
	}
	if (!(a && b))
	{
		printf("Line 4 - 条件为真\n");
	}
}

// 赋值运算符
fun5() {
	int a = 21;
	int c;

	c = a;
	printf("Line 1 - =  运算符实例，c 的值 = %d\n", c);

	c += a;
	printf("Line 2 - += 运算符实例，c 的值 = %d\n", c);

	c -= a;
	printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c);

	c *= a;
	printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c);

	c /= a;
	printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c);

	c = 200;
	c %= a;
	printf("Line 6 - %%= 运算符实例，c 的值 = %d\n", c);

	c <<= 2;
	printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c);

	c >>= 2;
	printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c);

	c &= 2;
	printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c);

	c ^= 2;
	printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c);

	c |= 2;
	printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c);

}

// 杂项运算符
fun6() {
	int a = 4;
	short b;
	double c;
	int* ptr;

	/* sizeof 运算符实例 */
	printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(a));
	printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(b));
	printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(c));

	/* & 和 * 运算符实例 */
	ptr = &a;    /* 'ptr' 现在包含 'a' 的地址 */
	printf("a 的值是 %d\n", a);
	printf("*ptr 是 %d\n", *ptr);

	/* 三元运算符实例 */
	a = 10;
	b = (a == 1) ? 20 : 30;
	printf("b 的值是 %d\n", b);

	b = (a == 10) ? 20 : 30;
	printf("b 的值是 %d\n", b);
}
int main() {
	printf("算术运算符: \n");
	fun1();
	printf("\n");
	printf("a++与++a的区别: \n");
	fun2();
	printf("\n");
	printf("关系运算符: \n");
	fun3();
	printf("\n");
	printf("逻辑运算符: \n");
	fun4();
	printf("\n");
	printf("赋值运算符: \n");
	fun5();
	printf("\n");
	printf("杂项运算符: \n");
	fun6();

}