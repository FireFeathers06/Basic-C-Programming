#include<stdio.h>
long long int max=17000;
int main()
{
    long long int T,i;
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
        long long int n,j,k;
        scanf("%lld",&n);
        long long int a[17000]={0},ans=1,c,h,w;
        a[0]=1;
        for(j=2;j<n+1;j++)
        {
           for(k=0;k<17000;k++)
           {
               a[k]=a[k]*j;
              
           }
            for(w=0;w<17000;w++)
              {
                   if(a[w]>10)
               {
                   c=a[w];
                   h=w;
                   while(c/10>0)
                   {
                       a[h]=c%10;
                       a[h+1]=a[h+1]+c/10;
                       c=a[h+1];
                       h++;
                   }                 
              
              }

              }              
        }
        for(j=16999;j>=0;j--)
        {
         if(a[j]!=0)
         {
             h=j;
             break;
         }    
        
        }
        for(j=h;j>=0;j--)
        {
            printf("%lld",a[j]);
        }

        printf("\n");
    }
    return 0;
}