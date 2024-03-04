#include <stdio.h>
int main()
{
    int arr[5];
    //  for(int i=0; i<=4;i++){
    //     printf("enter element number %d : \n",i+1);
    //     scanf("%d ",&arr[i]);

    // }

    // for(int i=4;i>=0;i--){
    //     printf("%d  ",arr[i]);
    // }

    // given an array of marks of students if the mark of any student is less tha 35 print its roll number.

    int marks[5] = {23, 56, 78, 12, 45};

    for (int i = 0; i <= 4; i++)
    {
        int passing_marks = marks[i];
        if (passing_marks < 35)
        {
            printf("you are failed roll no %d \n", i);
        }
        else
        {
            printf("congratulations roll number %d \n", i);
        }
    }
    return 0;
}
