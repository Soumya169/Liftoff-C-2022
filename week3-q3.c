#include <stdio.h>


int even(int num)
{
    return !(num & 1);
}


int main()
{
    int num;
    

    printf("enter any number: ");
    scanf("%d", &num);
    
    

    if(even(num))
    {
        printf("the number is even.");
    }
    else
    {
        printf("the number is odd.");
    }
    
    return 0;
}
