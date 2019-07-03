#include<stdio.h>
#include<stdlib.h>
int k=0,l=0;
int removeduplicate(double a[], int n) {
  int i,j;
    for(i = 0;i < n; i++) {
        for(j = i+1;j < n; ) {
	  if(abs(a[i]-a[j])<0.0000001) {
	      for(l = j; l < n; l++) {
		a[l] = a[l+1];
	      }
	      k++;
	      n--;

	    }
	      else
		  j++;
	}
    }
    return n;
}
	 
int main() {
    int s,r;
    double a[200];
    scanf("%d",&s);
    for( r = 0;(r <s);r++) {
        scanf("%lf", &a[r]);
	printf("r%d and s%d\n",r,s);
    }
    r = removeduplicate(a,s);
    printf("%d duplicate doubles removed and %d doubles remained in the array\n", k, r);
    s = r;  
    for(r=0;r < s ;r++) {
        printf("%lf ",a[r]);
    }
   
}
