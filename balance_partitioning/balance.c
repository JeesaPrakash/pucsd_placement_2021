#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int k=0;
    int a;
    int arr[N];
    for (int i=0;i<N;i++)
    {
        arr[i]=2*k+4;
        k++;
        printf("%d",&arr[i]);
    }
    while(N>0)
    {
    int ls=0;
    int rs=a-1;
    int cs=1;
    int ce=a-2;
    while (cs<ce)
    {
        if(ls<rs)
        {
            ls=ls+cs;
            cs=cs+1;
        }
        else
        {
           rs=rs+ce;
            ce=ce-1;
        }
    }
   printf("%ld",(ls-1));
    }
    return 0;
}
