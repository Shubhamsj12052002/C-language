#include <stdio.h>

void evenorodd(int n1)
{
    int result;
    result= (n1 %2);
    if (result==0)
      printf("The number is even\n");
    else
      printf("The nuber is odd\n");
}
 
int main()
{
     int num;
     printf("Enter the number:\n");
     scanf("%d",&num);
     evenorodd(num);
}
