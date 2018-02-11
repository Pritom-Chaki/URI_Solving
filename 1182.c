#include<stdio.h>

int main()
{
    int i,j,n;
    double sum=0,avg=0;
    double mat[15][15];
    char ch[2];

   scanf("%d",&n);
   scanf("%s",&ch);

    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }
for(i=0;i<=11;i++)

    {
        for(j=0;j<=11;j++)
        {
             if(j==n)
            {
                sum=sum+mat[i][j];
            }
        }
    }

avg = sum/12;

if(ch[0]=='S')
    {
        printf("%0.1lf\n",sum);
    }
 if(ch[0]=='M')
    {
        printf("%0.1lf\n",avg);
    }
    return 0;
}
