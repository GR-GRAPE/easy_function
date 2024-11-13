#include<stdio.h>

int gcd(int a, int b) 
{
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    long long int a,b,num;
    scanf("%d %d",&a,&b);
    num = gcd(a,b);
    
    printf("%d",num);

    return 0;
}
