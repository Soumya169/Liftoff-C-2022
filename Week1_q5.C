
#include<stdio.h>
int main()
{
    float r,d,c,area;
    printf("Enter the radius of circle: \n");
    scanf("%f",&r);
    d=r*2;
    printf("\n The Diameter of the circle is %f",d);
    
    c=2*3.14*r;
    printf("\n The Cicumference  of circle is %f",c);
    
    area=3.14*r*r;
    printf("\n  The Area of circle is %f",area);

    return 0;
}
