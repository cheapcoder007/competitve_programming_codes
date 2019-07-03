#include<stdio.h>
#include<math.h>
double p;
int mypow(double x, int y) {
      int i=0,ar[20],s=0;
      double sq=x*x;
      if(y < 0) {
	s = 1;
	y = (-y);
      }
      
      while(y > 0) {
	    ar[i]=y%3;
	    y=y/3;
	    i++;
	   
      }
      i--;
	    if((ar[i]==2))
	        p=sq;
	    if((ar[i]==1))
	      p=x;
	    if((ar[i]==0))
	        p=x*x*x;
	    i--;
	    while(i>=0) {
	    if((ar[i]==2))
	        p=p*p*p*sq;
	    if((ar[i]==1))
	        p=p*p*p*x;
	    if((ar[i]==0))
	        p=p*p*p;
	    i--;
      }
      if(s) {
	p= 1/p ;
      }
      return 0;
}
     

int main() {
  double x;
  int y;
    while((scanf("%lf%d",&x,&y))!=(-1)) {
        if(x == 0 && y == 0){
	printf("NAN\n");
	}else {
	  if(y==0)
	    printf("1\n");
	  else {
	    mypow(x,y);
	printf("%lf\n",p);
    }
	}
    }
}
