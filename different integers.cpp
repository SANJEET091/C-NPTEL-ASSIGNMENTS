#include <stdio.h>

int main()
{
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
  if (a==b || a==c || b==a || b==c)
      printf("0");
  
  else
    printf("1");
  return 0;
}
