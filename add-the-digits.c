  #include <stdio.h>
int main() 
{ int a,b,c,d,n,sum;
  printf("Enter the digit:\n");
 scanf("%d",&n);
 d=n%10;
 n=n/10;
 c=n%10;
 n=n/10;
 b=n%10;
 n=n/10;
 a=n%10;
 n=n/10;
 sum=a+b+c+d;
 printf("the sum of digits: %d\n",sum);
 return 0;
}
