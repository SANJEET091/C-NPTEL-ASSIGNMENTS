#include <stdio.h>

int main()
{
  int m,n,c;
  scanf("%d",&m);
   scanf("%d",&n);
  c=m/n;
if (c*n==m)
    printf ("%d",c);
  else
    printf("0");
  return 0;
}
