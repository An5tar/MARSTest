#include <stdio.h>

int main()
{
    char name, why;
    float height, weight;
    int age;

    scanf("%c", &name);
    scanf("%d", &age);
    scanf("%f", &height);
    scanf("%f", &weight);
    scanf("%c", &why);

    printf("�̸� : %c \n ���� : %d \n Ű : %.1f \n ������ : %.2f \n ���� : %c",name,age,height,weight,why);
    return 0;
}