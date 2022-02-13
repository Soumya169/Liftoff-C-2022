include<stdio.h>
int main()
{
    float a,b;
    int n;
    printf("1:Addition \n");
    printf("2:Subtraction \n");
    printf("3:Multiplication \n");
    printf("4:Division \n");
    printf(" Enter two numbers:\n");
    scanf("%f%f",&a,&b);
    printf("Enter your choice:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("\n addition of %f and %f is %f",a,b,a+b);
            break;
        case 2:
            printf("\n Subtraction of %f and %f is %f",a,b,a-b);
            break;
        case 3:
            printf("\n Multiplication of %f and %f is %f",a,b,a*b);
            break;
        case 4: 
            printf("\n Division  of %f and %f is %f",a,b,a/b);
            break;
       default:
                printf("invalid choice");
    }
    return 0;
}
