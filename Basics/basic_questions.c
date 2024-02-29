// calculate the area of a square (side is given)

#include <stdio.h>
int main(){

    int a;
    printf("enter the side:");
    scanf("%d",&a);
    printf("The area of the square is: %d \n",a*a);
    return 0;
}

// write a program to calculate area of a circle(radius is given);


#include <stdio.h>
int main(){

    float radius;
    printf("enter the radius:");
    scanf("%f",&radius);
    float area= 3.14*(radius*radius);
    printf("The area of the circle is: %f \n",area);
    return 0;
}
