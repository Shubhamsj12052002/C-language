#include<stdio.h>

int main()
{
	int originalnum;
	int num;
	int result=0;
	int remainder =0;
   printf("Enter the number\n");
   scanf("%d",&num);
   
	originalnum = num;
   while (originalnum >0)
	{
	        remainder = originalnum %10;
 	        result = result+(remainder*remainder*remainder); 
        	originalnum /=10;
//	printf("the result %d\n",result);
        }
//printf("the result %d",result);
if(result==num)
   printf("The number is Amstrong number\n");

else
   printf("The number is not an Amstrong number\n");

return 0;
}

