#include<stdio.h>
int main(){
    int b,n,m,i,j,keyboard[1000],usb[1000],max=0;
    scanf("%d %d %d",&b,&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&keyboard[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&usb[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(keyboard[i]+usb[j]<=b)
            {
               if(keyboard[i]+usb[j]>max)
               {
                   max=keyboard[i]+usb[j];
                   break;
               }
            }
        }
    }
    if(max==0)
        printf("-1");
    else
        printf("%d",max);

}
