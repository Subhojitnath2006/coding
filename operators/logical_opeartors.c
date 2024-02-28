#include <stdio.h>
int main()
{

    printf("%d \n", 4 > 3 && 5 > 2);
    printf("%d \n", 4 > 3 && 5 < 2);

    printf("%d \n", 4 > 3 || 5 < 2);
    printf("%d \n", 4 > 3 || 5 < 2);
    printf("%d \n", 4 < 3 || 5 < 2);

    printf("%d \n", !(4>3));
    printf("%d \n", !(4<3));
    printf("%d \n", !(4 > 3 && 5 > 2));
    printf("%d \n", !(4 > 3 && 5 < 2));

    printf("%d \n", !(4 > 3 || 5 < 2));
    printf("%d \n", !(4 > 3 || 5 < 2));
    printf("%d \n", !(4 < 3 || 5 < 2));

    return 0;
}
