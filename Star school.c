#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,x;
    scanf("%d",&n);
    int a[n][2],b[n],b1[n],b2[n],y=0,y1=0;
    for(j=0;j<n;j++)
    {
        for(i=0;i<2;i++)
        {
            scanf("%d",&a[j][i]);

        }
    }
     for(j=0;j<n;j++)
    {
        b[j]=0;
        b1[j]=0;
    }
     for(j=0;j<n;j++)
    {
        for(i=1;i<=n;i++)
        {
           if(a[j][0]==i&&j!=i-1)
                b[i-1]++;
           else if(a[j][1]==i&&j!=i)
               {
                     b1[i-1]++;
               }


        }
     b[j]=b[j]+b1[j];
    }
    x=b[0];
 for(j=0;j<n;j++)
{
   if(x<b[j])
   {
       x=b[j];
       y=j+1;
   }else
   {
       y1=j;
   }

  } printf("%d %d\n",y,y1);
   }


