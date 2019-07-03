#include <stdio.h>

int main() {
       
        int L, v, l, r, t, result[100000], i = 0, res = 0, p;
        scanf("%d", &t);
        while(t--) {
        scanf("%d%d%d%d", &L, &v, &l, &r);

        for(p = v; p <= L; p += v) {

	       if((p < l || p > r) && p % v == 0)
		      res++;
        }

        result[i++] = res;
        res = 0;
        }

        for(t = 0; t < i; t++)
	       printf("%d\n", result[t]);
        return 0;
}
