#include <stdio.h>
#include <string.h>
int main()
 {
  char str1[100], str2[100];
  printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);
	int result =strcam(str1,str2:);
   if (result == 0)
 {
    printf("The two strings are equal\n");
}
    else if (result < 0) 
{
    printf("String 1 is string 2\n");
}
    else
{
    printf("String 1 is  string 2\n");
}
    return 0;
}

