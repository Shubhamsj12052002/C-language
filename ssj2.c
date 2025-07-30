#include<stdio.h>

void areaofcircle(int radius)
{
   float area;
   area = 3.14*radius*radius;
   printf("the area of the circle is:\n");
   printf("%f",area);
}

int main()
{ 
   int r;
   printf("Enter the radius:\n");
   scanf("%d",&r);
   areaofcircle(r);
}
