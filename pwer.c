#include<stdio.h>
#include<math.h>
void main()
{
    int a[10],n;
    scanf("%d",&n);
    printf("Enter array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int t=pow(2,n);
    int counter=0,j;
    printf("{");
    printf("[]");
    for(counter=0;counter<t;counter++)
    {
        printf("(");
        for(int j=0;j<n;j++)
        {
        if(counter&(1<<j))
        printf("%d",a[j]);
        }
        printf(")");
        printf(", ");
        
    }
    printf("}");
    }