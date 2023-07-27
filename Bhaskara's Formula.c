/*If it's impossible to calculate the roots
because a division by zero or a square root of a negative number,
presents the message “Impossivel calcular”.*/
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double d=b*b-4*a*c;
    if(d>0 && a!=0){
       d=sqrt(d);
       double r1=(-b+d)/(2*a);
       double r2=(-b-d)/(2*a);
       printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}
