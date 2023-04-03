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

    printf("이름 : %c \n 나이 : %d \n 키 : %.1f \n 몸무게 : %.2f \n 사유 : %c",name,age,height,weight,why);
    return 0;
}