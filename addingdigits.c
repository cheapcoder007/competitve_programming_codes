#include <stdio.h>

void cal(int a, int b, int n);

int main() {

        int a, b, n;
        scanf("%d%d%d", &a, &b, &n);

        cal(a, b, n);

        return 0;
}

void cal(int a, int b, int n) {

        int j, i, e = 0;

        for(i = 0; i < n; i++) {
	       a = a *10;
	       for(j = 0; j < 10; j++) {
		      a = a + j;
		      if(!(a % b)) {
			     break;
		      }
		      a = a - j;
	       }
	       if(j == 10) {
		      e = 1;
		      break;
	       }
        }
        if(e)
	       printf("-1\n");
        else
        printf("%d\n", a);
}


