#include <stdio.h>
int main()
{
  float r,y,p;
  r=0.09;
  y=1;
  p=1;
  while(y<=10)
  {
    p=(1+r)*p;
    y++;
  }
  printf("%f",p*100);
  return 0;
}