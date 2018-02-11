#include<stdio.h>

int main()
{
 int day1,day2,hour1,hour2,min1, min2,sec1, sec2,  fday,fhour, fmin, fsec,ftotal;
 int total1,total2;
 char ch[10];
  //printf("");
    scanf("%s %d",ch, &day1);
    scanf("%d : %d : %d",&hour1,&min1,&sec1);
    //printf("");
    scanf("%s %d",ch, &day2);
    scanf("%d : %d : %d",&hour2,&min2,&sec2);

    total1= (86400*day1) + (3600*hour1) + (60*min1) + sec1;
     total2= (86400*day2) + (3600*hour2) + (60*min2) + sec2;
     ftotal=total2-total1;

     fday=ftotal/86400;
     fhour=(ftotal%86400)/3600;
     fmin=((ftotal%86400)% 3600)/60;
     fsec=(((ftotal%86400)%3600)%60);
     printf("%d dia(s)\n", fday);
        printf("%d hora(s)\n", fhour);
        printf("%d minuto(s)\n", fmin);
        printf("%d segundo(s)\n", fsec);
     return 0;
}
