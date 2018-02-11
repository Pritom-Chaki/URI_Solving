#include<stdio.h>

int main()
{
    int i,j,n;
    double sum=0, avg=0;
    double M[15][15];
    char ch[2];
   scanf("%d",&n);
   scanf("%s",ch);
   //printf("\n%s\n",ch[0]);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &M[i][j]);
        }
    }


for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",M[i][j]);
        }
        printf("\n");
    }



    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i=n)
            {
            sum= sum+M[i][j];
            printf("HLW\n");

            }
        }

    }

    avg=sum/3;
     printf("%lf\n",sum);
     printf("%lf\n",avg);





    return 0;
}
