#include <stdio.h>
int main()
{
    int a[100],b[100],i,ca=0,cb=0;
    for (i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            ca++;
        }
        else if(b[i]>a[i])
        {
            cb++;
        }
    }
    printf("%d %d",ca,cb);
    return 0;
}
