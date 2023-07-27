#include<stdio.h>
int main()
{
    int a,b,d,e;
    double c,f;
    scanf("%d %d %lf %d %d %lf",&a,&b,&c,&d,&e,&f);
    double res=(b*c+f*e);
    printf("VALOR A PAGAR: R$ %.2lf\n",res);
    return 0;
}
