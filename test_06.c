//#include <stdio.h>
//
//int main()
//{
//    int n[10]; /* n ��һ������ 10 ������������ */
//    int i, j;
//
//    /* ��ʼ������Ԫ�� */
//    for (i = 0; i < 10; i++)
//    {
//        n[i] = i + 100; /* ����Ԫ�� i Ϊ i + 100 */
//    }
//
//    /* ���������ÿ��Ԫ�ص�ֵ */
//    for (j = 0; j < 10; j++)
//    {
//        printf("Element[%d] = %d\n", j, n[j]);
//    }
//
//    return 0;
//}


// ��ȡ���鳤��
//#include <stdio.h>
//
//int main() {
//    int array[] = { 1, 2, 3, 4, 5 };
//    int length = sizeof(array) / sizeof(array[0]);
//
//    printf("���鳤��Ϊ: %d\n", length);
//
//    return 0;
//}





// ����������ָ������
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // ������arr������ָ��ʹ��
    }
}

int main() {
    int myArray[5] = { 10, 20, 30, 40, 50 };
    printArray(myArray, 5); // �����������ݸ�����
    return 0;
}