#include<stdio.h>
int add(int a, int b)
{
if(!a)
{
return b;
}
else 
{
return add((a&b)<<1,a^b);
}
}
int main()
{
int y=add(6,7);
printf("%d",y);
}
