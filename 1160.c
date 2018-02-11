#include<stdio.h>
int pa,pb,count=0;
    double g1,g2;
int main()
{  int t;
scanf("%d",&t);
while(t--){
    scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
    cfunction();
    if(count<=100)
    {
     printf("%d anos.\n",count);
    }
    else
    {printf("Mais de 1 seculo.\n");
    }
    count=0;
   }
    return 0;
}
void cfunction()
    {
      count++;
     pa=g1*pa/100+pa;
     pb=g2*pb/100+pb;
      if(pa<=pb && count<=100)
       {
         cfunction();
       }

    }
