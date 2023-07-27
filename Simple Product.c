#include<stdio.h>
int multiplication(int a,int b)
{
    int res=a*b;
    return res;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("PROD = %d\n",multiplication(a,b));
    return 0;
}
