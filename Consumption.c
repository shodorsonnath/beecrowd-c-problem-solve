#include<stdio.h>
int main()
{
    int a;
    double b;
    scanf("%d %lf",&a,&b);
    double res=(double)(a/b);
    printf("%.3lf km/l\n",res);
    return 0;
}
