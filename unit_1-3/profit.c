//This program is coded by Jasmine666//
//t.me/jasmine_666//

#include <stdio.h>
int main()
{
  //下面是利率//
  float r1,r2,r3,r4,r5,r0;
  r1=0.0414;
  r2=0.0468;
  r3=0.0540;
  r5=0.0585;
  r0=0.0072;

  //对策略进行计算//
  int m=1000;
  float p1,p2,p3,p4,p5;
  p1=m*r5;  
  p1=((m+p1)*r5);
  p1=((m+p1)*r5);
  p1=((m+p1)*r5);
  p1=((m+p1)*r5);


  p2=(m*r2);
  p2=((m+p2)*r2);
  p2=((m+p2)*r3);
  p2=((m+p2)*r3);
  p2=((m+p2)*r3);

  p3=(m*r3);
  p3=((m+p3)*r3);
  p3=((m+p3)*r3);
  p3=((m+p3)*r2);
  p3=((m+p3)*r2);

  p4=(m*r1);
  p4=((m+p4)*r1);
  p4=((m+p4)*r1);
  p4=((m+p4)*r1);
  p4=((m+p4)*r1);

  int mn=1;
  while(mn<=20) //5年=20季度//
    {
      p5=(m*r0);
      m=m+p5;
      mn++;
    }

  //建立利润数组//
  float p[5]={p1,p2,p3,p4,p5};

  //选择策略//
  int s;
  printf("Please enter the number of your strategy(1-5):\n");
  scanf("%d",&s);
  s=s-1;

  //对输入策略进行判断//
  if (s>4.9|s<0)
    printf("Please restart and enter the correct strategy.\n");//输入错误，结束程序//
  else
    printf("Your final profit is $%5.2f.\n",p[s]);//输出最终利润//

  return 0;
}