#include <stdio.h>

int main()
{
  int n= 0, ls= 0, rs= 0,count=0,ld=0,power=1,remaining,fd,temp;
  printf("Enter a number for cyclic left and right rotate: ");
  scanf("%d",&n);
  temp=n;
        while(temp>0)//counting number of digits
   {
    count++;
   temp=temp/10;
  }
 //for right shift
 ld=n%10;
 while(count>1)
   {
    power=power*10;
    count-=1;
  }
   remaining=n/10;
   rs= ld*power+remaining;
  printf("Cyclic Right Shifted number= %d\n",rs);
//for left shift
fd=n/power;
ls=(n%power)*10+fd;
  printf("Cyclic Left Shifted number= %d\n",ls);
}


