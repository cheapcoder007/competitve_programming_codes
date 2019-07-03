#include <stdio.h>
#include <math.h>
//assuming input is less than 255 and greater than 0
int alt(int a);                  
int  main() {
     int i;
     scanf("%d",&i);
     alt(i);
     return 0;
}

int alt(int n) {
  int j=7, i = 0, k, sum = 0, l, a, e;
    e = n;
    while(n>0) {
    n = n/2;
    i++;
    printf("In %d\n",i);
    }
    pow(2,j);
  
     k = 8-i;
    i = 1;
    
	    printf("In second while\n");
    printf("%d %d",i,k);
    
	    printf("In second while\n");
    while(i <= k) {
          if(i%2) {
	    printf("hi\n");
	    a = pow(2,j);
	    sum = sum + a;
	    j--;
	    i++;
	    printf("after In while %d %d",i,k);
	  }
    }
    printf("after while\n");
    n = e;
    for(; n;) {
	    if(i%2) {
	      if(n%2==0) {
		a = pow(2,j);
		sum+= a;
		j--;
		printf("In first if\n");
		n=n/2;
		i++;
	      }
	    }
	    else {
	      if(n%2) {
         	 a = pow(2,j);
		sum+=a;
		printf("In second if\n");
	      }
	      j--;
	      n=n/2;
	      i++;
	    }
    }
    printf("%d",sum);
    return 0;
}

