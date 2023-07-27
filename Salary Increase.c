#include<stdio.h>
int main()
{
    double n,b;
    scanf("%lf",&n);

    if(n>=0 && n<=400.0){
        b = n*0.15;
        printf("Novo salario: %.2lf\n",n+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 15 %\n");
    }

    else if(n>=400.01 && n<=800.00){
        b = n*0.12;
        printf("Novo salario: %.2lf\n",n+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 12 %\n");
    }

    else if(n>=800.01 && n<=1200.00){
        b = n*0.1;
        printf("Novo salario: %.2lf\n",n+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 10 %\n");
    }

    else if(n>=1200.01 && n<=2000.00){
        b = n*0.07;
        printf("Novo salario: %.2lf\n",n+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 7 %\n");
    }

    else if(n>2000.01){
        b = n*0.04;
        printf("Novo salario: %.2lf\n",n+b);
        printf("Reajuste ganho: %.2lf\n",b);
        printf("Em percentual: 4 %\n");
    }
    return 0;
}
