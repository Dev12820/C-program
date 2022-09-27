#include<stdio.h>
void main()
{
    int a[10],b[10],n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("Enter array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
    printf("(%d %d)",a[i],b[j]);
    }


}