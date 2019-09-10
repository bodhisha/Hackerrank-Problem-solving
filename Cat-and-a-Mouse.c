#include<stdio.h>
#include<stdlib.h>
int main()
{
    int q,i,x[100],y[100],z[100];
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d %d %d", &x[i],&y[i],&z[i]);
    if(abs(z[i]-x[i])>abs(z[i]-y[i]))
    {
        printf("Cat B\n");
    }
    else if (abs(z[i]-x[i])<abs(z[i]-y[i]))
        printf("Cat A\n");
    else
        printf("Mouse C\n");
    }
}
