#include<stdio.h>

#include<conio.h>

#include<math.h>
int main()
{
    int n,ctr=0,f,l,swap,t;
    printf("Enter any number\n");
    scanf("%d", &n);
    t = n;
    l = n%10;
    while(t!=0)
    {
        t = t/10;
        ctr++;
    }
    f = n/(int)pow(10, ctr-1);
    swap = l*pow(10,ctr-1) + n%(int)pow(10,ctr-1) - l + f;
    printf("First Digit %d\n",f);
    printf("Last Digit %d\n",l);
    printf("%d is swapped to %d\n", n, swap);
     return 0;
}
