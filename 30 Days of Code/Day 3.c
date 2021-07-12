#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%2==0)
    {
        if (2<=n && n<=5 || n>20)
        printf("Not Weird");
        else if (6<=n && n<=20)
        printf("Weird");
    }
    else{
        printf("Weird");
    }
    return 0;
}
