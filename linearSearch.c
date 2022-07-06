#include<stdio.h>
int main ()
{
    int a[5],flag,key,i;
    key=8;
    flag=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==key)
        {
            printf("found %d",i);
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("not found");
    }
}