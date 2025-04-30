#define _CRT_SECURE_NO_WARNINGS


// 写入文件
//#include <stdio.h>
//
//int main()
//{
//	FILE* fp = NULL;
//
//	fp = fopen("test.txt", "w+");
//	fprintf(fp, "This is testing for fprintf...\n");
//	fputs("This is testing for fputs...\n", fp);
//	fclose(fp);
//}


//读取文件
#include <stdio.h>

int main()
{
	FILE* fp = NULL;
	char buff[255];

	fp = fopen("test.txt", "r");
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("2: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("3: %s\n", buff);
	fclose(fp);

}

