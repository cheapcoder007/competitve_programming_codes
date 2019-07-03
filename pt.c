#include <stdio.h>

int main() {
        int n, a = 1, b = 1, c = 1, count = 0;
        scanf("%d", &n);
        
        while(a <= n) {
	       
	       while(b <= n) {

		      while(c <= n && a <= b) {

			     if(a*a + b*b == c*c) 
				    count++;
		      c++;
		      }
		      b++;
		      c = b;
	       }
	       a++;
	       b = a;
        }
        printf("%d\n", count);
}
