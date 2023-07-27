#include<stdio.h>
#include<math.h>
double sarea(double r)
{
    double pi=3.14159;
    double area=(4.0/3)*pi*pow(r,3);
    return area;
}
int main()
{
    double r;
    scanf("%lf",&r);
    double res=sarea(r);
    printf("VOLUME = %.3lf\n",res);
    return 0;
}
