#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int odd=0,even=0;
    while(n!=0)
    {
        int rem=n%10;
        if(rem%2==1)
            odd++;
        else
            even++;
        n/=10;
    }
    printf("%d ",odd);
    printf("%d\n",even);
  return 0;
}