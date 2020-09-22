#include <stdio.h>

int main(){
    int num ,i , add = 0;
    // recieving input from user
    printf("print the number you want to check\n");
    scanf("%d", &num);
    // finding the divisor
    for (i = 1; i < num ; i++)
    {
        if ( num % i == 0)
        {
           add = add + i ;
        }
    //  checking if number is perfect or not
    }
    if (num == add)
    {
        printf("%d is a perfect number" , num);
    }
    else
    {
        printf("%d not perfect number" , num);
    }
 return 0;
}
