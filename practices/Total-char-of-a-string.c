#include <stdio.h>
int main()
{
  char name[1000];
  printf("\nType a string: ");
  scanf("%s", &name);
  int i = 0, length;
  while (name[i] != '\0')
  {
    i = i + 1;
  }
  length = i;
  printf("\n>>>>> %s has %d characters\n",name, length);
  return 0;
}
