#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a, min=100000, i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a<min)
                min=a;
        }
        printf("%ld\n",min*(n-1));
    }
    return 0;
}
