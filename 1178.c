int main()
{
    int i;
    double X,N[100];

    scanf("%lf",&X);

    for(i=0;i<100;i++)
    {
            N[i]=X;
            X=X/2;
    }
    for(i=0;i<100;i++)
    {
        printf("N[%d] = %0.4lf\n",i,N[i]);
    }
    return 0;
}
