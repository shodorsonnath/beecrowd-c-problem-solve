int main()
{
    double n;
    scanf("%lf", &n);
    int t = n * 100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", t/10000);
    t=t%10000;
    printf("%d nota(s) de R$ 50.00\n", t/5000);
    t=t%5000;
    printf("%d nota(s) de R$ 20.00\n", t/2000);
    t=t%2000;
    printf("%d nota(s) de R$ 10.00\n", t/1000);
    t=t%1000;
    printf("%d nota(s) de R$ 5.00\n", t/500);
    t=t%500;
    printf("%d nota(s) de R$ 2.00\n", t/200);
    t=t%200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", t/100);
    t=t%100;
    printf("%d moeda(s) de R$ 0.50\n", t/50);
    t=t%50;
    printf("%d moeda(s) de R$ 0.25\n", t/25);
    t=t%25;
    printf("%d moeda(s) de R$ 0.10\n", t/10);
    t=t%10;
    printf("%d moeda(s) de R$ 0.05\n", t/5);
    t=t%5;
    printf("%d moeda(s) de R$ 0.01\n", t);
    return 0;
}

