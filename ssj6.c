#include <stdio.h>

void celtofer(float n1)
{
    float result;
    result= (1.8)*n1 + 32;
    printf("The temperature in Farenite is:\n");
    printf("%f",result);
}
 
int main()
{
     int num;
     printf("Enter the temperature in celsius:\n");
     scanf("%d",&num);
     celtofer(num);
}
