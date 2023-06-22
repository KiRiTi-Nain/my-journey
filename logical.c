# include <stdio.h>
int main()
{ int a=1,b=2,c=-4,w,x,y,z;
  w=a||b||c;
  x=a&&b&&c;
  y=a||b&&c;
  z=a&&b||c;
printf("%d\n %d\n %d\n %d\n",w,x,y,z);
 
return 0;

}


