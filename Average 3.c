#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,e;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
    double m=(n1*2+n2*3+n3*4+n4)/10;
    printf("Media: %.1lf\n",m);
    if(m>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(m>=5.0){
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        double m2=(m+e)/2;
        if(m>=5.0){
           printf("Aluno aprovado.\n");
           printf("Media final: %.1lf\n",m2);
        }
        else
            printf("Aluno reprovado.\n");
    }
    else
        printf("Aluno reprovado.\n");
    return 0;
}
