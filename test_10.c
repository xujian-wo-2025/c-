// �ַ���
//#include <stdio.h>
//
//int main()
//{
//	char site[7] = { 'N', 'C', 'H', 'K', 'A', 'X', '\0' };
//
//	printf("�ϲ����մ�ѧ: %s\n", site);
//
//	return 0;
//}


// �����ַ�����һ�²���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[14] = "runoob";
	char str2[14] = "google";
	char str3[14];
	int  len;

	/* ���� str1 �� str3 */
	strcpy(str3, str1);
	printf("strcpy( str3, str1) :  %s\n", str3);

	/* ���� str1 �� str2 */
	strcat(str1, str2);
	printf("strcat( str1, str2):   %s\n", str1);

	/* ���Ӻ�str1 ���ܳ��� */
	len = strlen(str1);
	printf("strlen(str1) :  %d\n", len);

	return 0;
}
