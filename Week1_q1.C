#include<stdio.h>
int main()
{
        char a[40],b[20],c[30];
        int R;        
        printf("\n Enter Your Name:");
        scanf("%s",a);
        printf("\n Enter Your Branch:");
        scanf("%s",b);
         printf("\n Enter Your Regd.no.:");
        scanf("%d",&R);
        printf("\n Enter Your Hobbies:");
        scanf("%s",c);
        printf("Name: %s\n",a);
        printf("Branch: %s\n",b);
        printf("Regd.no.: %d\n",R);
        printf(" Hobbies: %s\n",c);
        return 0;
        
}
