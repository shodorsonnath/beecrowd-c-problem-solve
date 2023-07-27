#include<stdio.h>
#include<math.h>
double triangle(double a,double c)
{
    double res=0.5*a*c;
    return res;
}
double circle(double c)
{
    double pi=3.14159;
    double area=pi*pow(c,2);
    return area;
}
double trapezium(double a,double b,double c)
{
    double area=(((a+b)/2)*c);
    return area;
}
double square(double b)
{
    double area=b*b;
    return area;
}
double rec(double a,double b)
{
    double area=a*b;
    return area;
}
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double ara=triangle(a,c);
    double arb=circle(c);
    double arc=trapezium(a,b,c);
    double as=square(b);
    double ar=rec(a,b);
    printf("TRIANGULO: %.3lf\n",ara);
    printf("CIRCULO: %.3lf\n",arb);
    printf("TRAPEZIO: %.3lf\n",arc);
    printf("QUADRADO: %.3lf\n",as);
    printf("RETANGULO: %.3lf\n",ar);
    return 0;
}

