#include<stdio.h>
int main(){
    int n,i,a[1000000],max=a[0],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
           count=count+1;
    }
    printf("%d",count);
      
}
