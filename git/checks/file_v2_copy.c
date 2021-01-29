#include<stdio.h>

int main()
{
    int num=3;
    printf("I dont want this line");
    if(num%2 == 0){
        printf("the num %d is odd\n\r",num);
    }
    else
    {
        printf("the num %d is odd\n\r",num);
    }
    printf("I dont want this line");
    
    printf("I want this line ");
    return 0;
}
