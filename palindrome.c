#include<stdio.h>
int main()
{
  int N,reverrsed integer=0,rem,original integer;
  scanf("%d",&N);
  original integer=N;
  while(N!=0)
  {
    rem=N%10;
    reversed integer=reversed integer*10+rem;
    N/=10;
   }
   if(original integer==reversed integer)
      printf("%d","yes");
   else
      printf("%d","no");
 }
