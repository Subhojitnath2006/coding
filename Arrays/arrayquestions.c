// #include <stdio.h>
// int main(){

//     int numbers[8]={1,2,3,4,5,6,7,8};
//     for(int i=0; i<=7; i++){
//         if(i%2!=0){
//             numbers[i]= numbers[i]*2;
//         }else{
//             numbers[i]+=10;
//         }
//     }
//     for(int i=0; i<=7; i++){
//         printf("%d \n",numbers[i]);
//     }

//     return 0;
// }

// count the numbers of elements in given array greater than a given number x.

// #include <stdio.h>
// int main(){
//     int x;
//     printf("enter a number: ");
//     scanf("%d \n",&x);
//     int numbers[8]={1,2,3,4,5,6,7,8};
//     int count=0;
//     for(int i=0; i<=7; i++){
//         if(numbers[i]>x){
//             count+=1;
//         }

//     }
//     printf("the no of numbers greater than %d: %d ",x,count);

//     return 0;
// }

// find the difference between the sum of elements at even indices to the sum of elements at odd indices.

// #include <stdio.h>
// int main(){

//     int numbers[8]={1,2,3,4,5,6,7,8};
//     int evensum=0;
//     int oddsum=0;
//     for(int i=0; i<=7; i++){
//         if(i%2==0){
//             evensum= evensum+numbers[i];
//         }else{
//             oddsum= oddsum+numbers[i];
//         }

//     }
//     printf("the difference is: %d",(evensum-oddsum));

//     return 0;
// }

// find the total no of pairs in the array whose sum is equal to the given value x.

// #include <stdio.h>
// int main(){
//     int x;
//     printf("enter a number: ");
//     scanf("%d \n",&x);
//     int numbers[8]={1,2,3,4,5,6,7,8};
//     int count=0;
//     for(int i=0; i<=7; i++){
//        for(int j=i+1;j<=7;j++){
//         if(numbers[i]+numbers[j]==x){
//             count++;
//         }
//        }
//     }
//     printf("the no of pairs  is: %d",count);

//     return 0;
// }

// find the total number of triplets whose sum is equal to the given value x.
#include <stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d \n", &x);
    int numbers[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int count = 0;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            for (int k = j + 1; k <= 7; k++)
            {
                if (numbers[i] + numbers[j] + numbers[k] == x)
                {
                    count++;
                }
            }
        }
    }
    printf("the no of pairs  is: %d", count);

    return 0;
}