#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,x=0,y=0,j=0,z=0;
    scanf("%d",&n);
    int a,b;
    if(n>=4&&n<=9){
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=n;i++)
    {
        x=a%10;
        y=b%10;
        a=a/10;
        b=b/10;
        if(x==y)
           j=j+1;
        else{
            z=z+1;
        }


    }
    printf("%d %d",j,z);
    }
}

