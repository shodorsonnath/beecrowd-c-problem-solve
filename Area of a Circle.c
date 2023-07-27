#include<stdio.h>
#include<math.h>
double circlearea(double r)
{
    double pi=3.14159;
    double area=pi*r*r;
    return area;
}
int main()
{
    double r;
    scanf("%lf",&r);
    printf("A=%.4lf\n",circlearea(r));
    return 0;
}
