#include <stdio.h>
int main() {

        int n, c;
        scanf("%d%d", &n, &c);

        int i, w, wprev = 0, count = 0;


        for(i = 0; i < n; i++) {

	       scanf("%d", &w);

	       if((w - wprev) <= c)
		      count++;
	       else
		      count = 1;

	       wprev = w;

        }

        printf("%d\n", count);

}
