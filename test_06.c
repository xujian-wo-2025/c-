//#include <stdio.h>
//
//int main()
//{
//    int n[10]; /* n 是一个包含 10 个整数的数组 */
//    int i, j;
//
//    /* 初始化数组元素 */
//    for (i = 0; i < 10; i++)
//    {
//        n[i] = i + 100; /* 设置元素 i 为 i + 100 */
//    }
//
//    /* 输出数组中每个元素的值 */
//    for (j = 0; j < 10; j++)
//    {
//        printf("Element[%d] = %d\n", j, n[j]);
//    }
//
//    return 0;
//}


// 获取数组长度
//#include <stdio.h>
//
//int main() {
//    int array[] = { 1, 2, 3, 4, 5 };
//    int length = sizeof(array) / sizeof(array[0]);
//
//    printf("数组长度为: %d\n", length);
//
//    return 0;
//}





// 将数组名做指针运算
#include <stdio.h>
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // 数组名arr被当作指针使用
    }
}

int main() {
    int myArray[5] = { 10, 20, 30, 40, 50 };
    printArray(myArray, 5); // 将数组名传递给函数
    return 0;
}