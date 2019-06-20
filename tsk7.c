#include <stdio.h>
#include <string.h>
 
int main()
{
  char a[100], b[100];
 
  printf("Enter a string \n");
  gets(a);
 
  strcpy(b, a);  
  strrev(b);  
 
  if (strcmp(a, b) == 0) 
    printf("The string is  palindrome.\n");
  else
    printf("The string not palindrome.\n");
 
  return 0;
}
