#include <stdio.h>

int main()
{
  int diff;
  char firstchar,secondchar;
  printf("Enter first character:\n");
  scanf("%c",&firstchar);
  
  printf("Enter second character:\n");
  scanf(" %c",&secondchar);

  diff=(secondchar-firstchar) - 1;
  printf(" The number of characters btw two are:\n");
  printf("%d\n",diff);

return 0;
}
