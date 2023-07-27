#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("X = %d\n",sum(a,b));
    return 0;
}
int sum(int a,int b)
{
    int res=a+b;
    return res;
}
