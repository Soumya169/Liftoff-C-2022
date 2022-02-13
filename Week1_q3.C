//Q3
#include<stdio.h>
int main()
{
    int n,a;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    
    switch (a%2)
         {
        case 0 :
            printf("%d is a even number",a);
            break;
        case 1:
            printf("%d is a odd number",a);
            break;
        }
    return 0;
}
