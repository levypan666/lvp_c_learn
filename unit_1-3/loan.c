//This program is coded by Jasmine666//
//t.me/jasmine_666//

#include <stdio.h>
#include <math.h>
int main()
{
  float d,p,r,m;

  printf("Please enter the mount of the loan:\n¥");//贷款金额//
  scanf("%f",&d);

  printf("Please enter the monthly repayment amount:\n¥");//每月还款//
  scanf("%f",&p);

  printf("Please enter the monthly interest rate(in percentage):\n");//利率（百分数）//
  scanf("%f",&r);
  r=r/100; //？？？？不会加%号啊//

  m=(log(p/(p-d*r)))/(log(1+r));//计算需要的月数字//
  printf("You need %4.1f months to pay off the loan.\n", m);//保留一位小数//
}