#include<stdio.h>
int main()
{
    int num,a;
    float b;
    scanf("%d%d%f",&num,&a,&b);
    float res=(float)(a*b);
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",res);
    return 0;
}
