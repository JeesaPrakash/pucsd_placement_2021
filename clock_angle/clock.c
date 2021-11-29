#include<stdio.h>
#include<stdlib.h>
 int main()
 {
    int h,m;
    int e;
    float ah,am;
    scanf("%d%d",&h,&m);
    if(h<=6)
    am=(float)h*30;
    else
    am=(float)(12-h)*30;

    if(m<=30 && h<=6)
    ah=(float)m*6;
    else if(m>=30&& h>=6)
    ah=(float)(60-m)*6;


    if(m<=12)
        e=6;
    else if(m>12 && m<=24)
        e=12;
    else if(m>24 && m<=36)
        e=18;
    else if(m>36 && m<=48)
        e=24;
    else if(m>48& m<=60)
        e=30;

    float t1=am+ah-e;
    float t2=am-ah-e;
    if(t1>t2)
        printf("%d",t1);
    else
        printf("%d",t2);
    return 0;
    }