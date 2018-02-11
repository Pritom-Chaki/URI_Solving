#include<stdio.h>

int main()
{
    double i;
    int i2=0;

    for(i=0;i<=2;i+=0.2)
    {
         if(i2%5)
        {
        printf("I=%0.1lf J=%0.1lf\n",i,i+1);
        printf("I=%0.1lf J=%0.1lf\n",i,i+2);
        printf("I=%0.1lf J=%0.1lf\n",i,i+3);

        }
        else
        {
        printf("I=%d J=%d\n",i2/5,(i2/5)+1);
        printf("I=%d J=%d\n",i2/5,(i2/5)+2);
        printf("I=%d J=%d\n",i2/5,(i2/5)+3);
        }
        i2++;
    }
    return 0;
}
