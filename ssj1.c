#include <stdio.h>
#include <ctype.h>
void uptolow(char low)
{
  char lower;
  lower = tolower(low);
  printf("The lower case char is :");
  printf("%c",lower);
}

int main()
{
  char upper;
  printf("Enter the upper case char:");
  scanf("%c", &upper);
  uptolow(upper);
}
