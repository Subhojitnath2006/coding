#include <stdio.h>
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int gcd(int a, int b)
{
    int hcf;
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;

            break;
        }
    }
    return hcf;
}
int main()
{

    int a;
    printf("enter a munber a: ");
    scanf("%d", &a);
    int b;
    printf("enter a munber b: ");
    scanf("%d", &b);

    int hcf = gcd(a, b);
    printf("hcf of a and b is : %d \n", hcf);

    return 0;
}