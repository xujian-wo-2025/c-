//#include <stdio.h>
//
//enum DAY
//{
//    MON = 1, TUE, WED, THU, FRI, SAT, SUN
//};
//
//int main()
//{
//    enum DAY day;
//    day = WED;
//    printf("%d\n", day);
//
//    // ����ö��Ԫ��
//    for (day = MON; day <= SUN; day++) {
//        printf("ö��Ԫ�أ�%d \n", day);
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//
//    enum color { red = 1, green, blue };
//
//    enum  color favorite_color;
//
//    /* �û�����������ѡ����ɫ */
//    printf("��������ϲ������ɫ: (1. red, 2. green, 3. blue): ");
//    scanf_s("%u", &favorite_color);
//
//    /* ������ */
//    switch (favorite_color)
//    {
//    case red:
//        printf("��ϲ������ɫ�Ǻ�ɫ");
//        break;
//    case green:
//        printf("��ϲ������ɫ����ɫ");
//        break;
//    case blue:
//        printf("��ϲ������ɫ����ɫ");
//        break;
//    default:
//        printf("��û��ѡ����ϲ������ɫ");
//    }
//
//    return 0;
//}


// ������ת����ö��
#include <stdio.h>
#include <stdlib.h>

int main()
{

    enum day
    {
        saturday,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    } workday;

    int a = 1;
    enum day weekend;
    weekend = (enum day)a;  //����ת��
    //weekend = a; //����
    printf("weekend:%d", weekend);
    return 0;
}