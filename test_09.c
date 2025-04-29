//#include <stdio.h>
//
//int max(int x, int y)
//{
//    return x > y ? x : y;
//}
//
//int main(void)
//{
//    /* p �Ǻ���ָ�� */
//    int (*p)(int, int) = max; 
//    int a, b, c, d;
//
//    printf("��������������:");
//    scanf_s("%d %d %d", &a, &b, &c);
//
//    /* ��ֱ�ӵ��ú����ȼۣ�d = max(max(a, b), c) */
//    d = p(p(a, b), c);
//
//    printf("����������: %d\n", d);
//
//    return 0;
//}



// populate_array() ������ 10 �λص������������ص������ķ���ֵ��ֵ�����顣
#include <stdlib.h>  
#include <stdio.h>

void populate_array(int* array, size_t arraySize, int (*getNextValue)(void))
{
    for (size_t i = 0; i < arraySize; i++)
        array[i] = getNextValue();
}

// ��ȡ���ֵ
int getNextRandomValue(void)
{
    return rand();
}

int main(void)
{
    int myarray[10];
    /* getNextRandomValue ���ܼ����ţ������޷����룬��Ϊ��������֮���൱�ڴ���˲���ʱ������ int , �����Ǻ���ָ��*/
    populate_array(myarray, 10, getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d ", myarray[i]);
    }
    printf("\n");
    return 0;
}