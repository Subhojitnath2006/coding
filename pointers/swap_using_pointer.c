#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x; // temp=n
    *x = *y;   // m=n
    *y = temp; // m=temp
    return;
}
int main()
{

    int n;
    printf("enter a munber n: ");
    scanf("%d", &n);
    int m;
    printf("enter a munber m: ");
    scanf("%d", &m);

    // int *x=&n;
    // int *y=&m;

    swap(&n, &m);
    printf("the value if n is: %d \n",n );
    printf("the value if m is: %d \n", m);

    return 0;
}