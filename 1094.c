#include<stdio.h>

int main()
{
    int t, n,C=0,R=0,S=0,total=0;
    char ch;
    double PC, PR, PS;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %c",&n,&ch);

        if(ch == 'C')
        {
            C+=n;
        }

        else if(ch == 'R')
        {
            R+=n;
        }

        else if(ch == 'S')
        {
            S+=n;
        }

    }
     total=C+R+S;
   PC=(double)C*100/(double)total;
   PR=(double)R*100/(double)total;
   PS=(double)S*100/(double)total;

     printf("Total: %d cobaias\n",total);
     printf("Total de coelhos: %d\n",C);
      printf("Total de ratos: %d\n",R);
       printf("Total de sapos: %d\n",S);
        printf("Percentual de coelhos: %0.2llf %%\n",PC);
         printf("Percentual de ratos: %0.2llf %%\n",PR);
          printf("Percentual de sapos: %0.2llf %%\n",PS);

return 0;
}
