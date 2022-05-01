#include<stdio.h>
#include<math.h>
int Prime(int i,int num)
{
    if(num==i)
        return 0;
    else
        if(num%i==0)
            return 1;
    else{
        return Prime(i+1,num);
    }
}
int main()
{
    int num;
    printf("Enter your Number:");
    scanf("%d",&num);

    if(Prime(2,num)==0)
        printf("It is a Prime Number.");
    else
        printf("It is not a Prime Number.");
}
