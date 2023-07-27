#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    double avg=((a*3.5)+(b*7.5))/(3.5+7.5);
    printf("MEDIA = %.5lf",avg);
    return 0;
}
