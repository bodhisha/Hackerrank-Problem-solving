#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,n,a[100][100],dl=0,dr=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        dl=dl+a[i][i];
        dr=dr+a[i][n-1-i];
        
    }
    printf("%d",abs(dr-dl));
}
