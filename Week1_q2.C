
#include<stdio.h>
int main()
{
    int a,b;
    printf("Please enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf(" %d is the maximum number \n",a);
    }
     else if(b>a)
    {
        printf("%d is the maximum number \n",b);
    }
     else
    {
    printf("Both numbers are same");
    }

    return 0;
}
