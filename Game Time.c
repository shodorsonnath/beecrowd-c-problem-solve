#include<stdio.h>
int main()
{
    int n,m,c=0,i;
    scanf("%d %d",&n,&m);
    if(n==m)
        printf("O JOGO DUROU %d HORA(S)\n",24-n+m);
    else if(n<m){
        for(i=n;i<m;i++){
            c++;
        }
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    else if(n>=m)
        printf("O JOGO DUROU %d HORA(S)\n",24-n+m);
    return 0;
}
