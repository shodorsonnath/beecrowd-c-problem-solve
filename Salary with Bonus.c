#include<stdio.h>
int main()
{
    char n[100];
    double a,b;
    scanf("%s%lf%lf",&n,&a,&b);
    double total=(b*0.15)+a;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
