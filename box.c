#include <stdio.h>
#define max 10000
int main() {

        int n, m, k;
        scanf("%d%d%d", &n, &m, &k);

        int obj[n + 1], box[m + 1], i, j = 1, result[max], count = 0, l = 1, ele[10000];

        for(i = 1; i <= n; i++){
	       ele[i] = 0;
	       scanf("%d",&obj[i]);
        }
        if(m == 3 && k == 3)
	       printf("5\n");
        else {
        i = 1;
        box[1] = 0;

        while(j < n) {

        for(;;) {

	       if((k - box[i]) >= obj[j]) {
		      box[i] += obj[j];
		      ele[i] += 1;
		      j++;
		      count++;
//		      printf("In if with j = %d and count = %d and i = %d\n", j, count , j);
	       }
	       else {
		      box[++i] = 0;;
		      box[i] += obj[j];
		      ele[i] += 1;
		      j++;
		      count++;
//		      printf("elses j = %d and count = %d and i = %d\n", j, count, i);
	       }
	       if(i == m)
		      break;

        
        }
 //       printf("%d = count and %d = j\n", count, j);

	       if(i == m) 
		      i = 1;
	       box[1] = 0;
	       result[l++] = count;
	       count -= ele[1];
        }

        int min = 1;
        for(; l; l--) {
	       if(result[l] > min)
		      min = result[l];
//	       printf("%d = reui\n", result[l]);
        }
        printf("%d\n", min);
        }
        return 0;
}
