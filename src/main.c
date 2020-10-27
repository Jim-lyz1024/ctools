#include <stdio.h>
#include "max.h"
#include "sum.h"
void main()
{  int a=10,b=12,c;
  c=welcome(a,b);
  printf("max of %d and %d is %d\n",a,b,c);
  c=add(a,b);
  printf("%d+%d=%d\n",a,b,c);
}

