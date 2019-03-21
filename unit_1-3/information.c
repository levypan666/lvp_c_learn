#include <stdio.h>
int main()
{
  int a,b;
  float x,y;

  printf("Please enter the value of a and b:\n");
  scanf("%d%d",&a,&b);
  printf("a=%d b=%d\n",a,b );

  printf("Please enter the value of x and y:\n");
  scanf("%f%e",&x,&y);
  printf("x=%-.2f y=%e\n",x,y );
  
  char c1,c2;
  printf("Please enter the chart of c1 and c2:\n");
  scanf("%c %c",&c1,&c2);
  printf("c1=%c c2=%c\n",c1,c2);

  return 0;
}