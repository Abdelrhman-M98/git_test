#include <stdio.h>
#include <stdlib.h>
#include "git_test.h"

int main()
{
 int x,y,sum=0;

 x=20;
 y=25;
 sum=sum_v(x,y);
 printf("Sum of %d and %d = %d ",x,y,sum);


    return 0;
}
