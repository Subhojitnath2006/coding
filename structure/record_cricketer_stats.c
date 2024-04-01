#include <stdio.h>
#include <string.h>
int main(){

    typedef struct cricketer{
         char name[15];
        int age;
        int nooftestmatches;
        float average;
    }cricketer;

    
// array of cricketers

cricketer arr[20];  // arr[0], arr[1], arr[2]

//taking input od stats
for(int i=0;i<20;i++){
    printf("enter cricketrs data\n");
    scanf("%[^\n]s\n",arr[i].name);
    scanf("%d\n",&arr[i].age);
    scanf("%d\n",&arr[i].nooftestmatches);
    scanf("%f\n",&arr[i].average);
}

//printing the stats

for(int i=0;i<20;i++){
   printf("Name:%s\n",arr[i].name);
    printf("Age:%d\n",arr[i].age);
    printf("No of test matches played:%d\n",arr[i].nooftestmatches);
    printf("Average:%f\n",arr[i].average);
    printf("\n");
}

    return 0;

}