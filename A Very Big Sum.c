#include <stdio.h>
int main()
{
    long long int ar[10],sum=0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
        sum=sum + ar[i];
    }
    printf("%lld",sum);
    return 0;
}
