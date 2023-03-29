#include <stdio.h>
int main()
{
  int n,first=0,second =1,next,i;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("The first %d the Fibonacci series are:\n", n);
  for (i=0;i<n;++i) 
{
    if (i<=1) 
{
    next=i;
} 
   else
{
    next=first+second;
    first=second;
    second=next;
}

    printf("%d is",next);
    if (next %2==0)
{
    printf("even");
} 
   else
{
    printf("odd");
}
}

return 0;
}

