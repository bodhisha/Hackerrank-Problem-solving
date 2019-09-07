#include<stdio.h>
int main()
{
    int i,n,k,bill[100000],bCharged,bActual,sum=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&bill[i]);
        sum=sum+bill[i];
    }
    scanf("%d",&bCharged);
    bActual=((sum-bill[k])/2);

    if(bActual==bCharged)
    {
        printf("Bon Appetit");
    }
    else{
        printf("%d",bCharged-bActual);
    }
}
