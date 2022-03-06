#include<stdio.h>

#include<conio.h>

int main() 
{
 int a[2][2],b[2][2],p[2][2];
 printf("Enter the elements of First matrix A\n");
 for(int i = 0; i<2; i++)
 {
 for(int j = 0; j<2; j++)
  {
  printf("Enter value for a[%d][%d]: ", i+1, j+1);
   scanf("%d", &a[i][j]);
  }
    }
  printf("Enter the elements of Second matrix B\n");
   for(int i = 0;i<2;i++)
    {
   for(int j = 0; j<2; j++){
   printf("Enter value for b[%d][%d]: ", i+1, j+1);
   scanf("%d", &b[i][j]);
        }
    }

    printf("\nThe matrix A is:\n");
    for(int i = 0; i<2; i++)
    {
    for(int j = 0; j<2; j++)
    {
     printf("%d ", a[i][j]);
    }
     printf("\n");
    }

    printf("\nThe matrix B is:\n");
    for(int i = 0; i<2; i++)
    {
     for(int j = 0; j<2; j++)
     {
     printf("%d ", b[i][j]);
     }
      printf("\n");
    }
    printf("The sum of matrices A and B is:\n");
    for(int i = 0; i<2; i++)
    {
    for(int j = 0; j<2; j++)
        {
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            p[i][j] = 0;
            for(int k = 0; k <2; k++)
            {  
                p[i][j] = p[i][j] + a[i][k] * b[k][j];   
            }  
        }
    }
    printf("The product of matrix A and B is \n");
    for(int i = 0; i<2; i++)
    {  
        for(int j = 0; j<2; j++)
        {  
            printf("%d ", p[i][j]);  
        }  
        printf("\n");  
    } 
    return 0;
}
