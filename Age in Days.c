#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y=n/365;
    int rem=n-y*365;
    //int m=n%365/30;
    int m=rem/30;
    rem=rem-m*30;
    //int d=(n%365)%30;
    int d=rem;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}
