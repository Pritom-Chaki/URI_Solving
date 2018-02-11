#include<stdio.h>

int main()
{
    int X[1001],i,n,pos=0,min=0;
    scanf("%d",&n);
   // X[n]=1995;
    for(i=0;i<n;i++)
    {
      scanf("%d",&X[i]);

      }
      min=X[0];
   for(i=0;i<n;i++)
    {
       if( X[i] < min)
      {
          pos=i;
          min = X[i];
      }
    }

   printf("Menor valor: %d\n",min);
   printf("Posicao: %d\n",pos);
    return 0;

}


