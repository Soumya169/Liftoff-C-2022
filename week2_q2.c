#include<stdio.h>
#include<conio.h>

int main()
{
int odd = 0, even = 0;
printf("Enter 10 integers");
 for(int i = 1; i<=10; i++)
 {
 int n;
 scanf("%d",&n);
 if(n%2==0)
  {
  even = even + n;
   }
  else{
  odd = odd + n;
   }
 }
  printf("Sum of Even number is %d", even);
  printf("Sum of odd number is %d", odd);
  return 0;
}
