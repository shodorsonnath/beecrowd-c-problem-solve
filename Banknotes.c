#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    printf("S=%d\n",t);
    printf("%d note 1000\n",t/1000);
    int rem=t%1000;
    printf("%d note 500\n",t/500);
    rem=rem%500;
    printf("%d note 200\n",t/200);
    rem=rem%200;
    printf("%d note 100\n",t/100);
    rem=rem%100;
    printf("%d note 50\n",t/50);
    rem=rem%50;
    printf("%d note 20\n",t/20);
    rem=rem%20;
    printf("%d note 10\n",t/10);
    rem=rem%10;
    printf("%d note 5\n",t/5);
    rem=rem%5;
    printf("%d note 2\n",t/2);
    rem=rem%2;
    printf("%d note 1\n",t/1);
    return 0;
}
