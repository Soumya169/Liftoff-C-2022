#include<stdio.h>
void swap(int*,int*);
  int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("before swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    swap(&a,&b);
    printf("after swapping\n");
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
  }
void swap(int*x,int*y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
