#include <stdio.h>

int main() {

        int n, k, sum = 0;
        scanf("%d%d", &n, &k);

        int arr[n], i;
        for(i = 0; i < n; i++) 
	       scanf("%d", arr + i);
        i--;

        for(; (i >=0) && k; i--) {
	       if(arr[i] < 0) {
		      arr[i] *= -1;
		      k--;
	       }
        }
        for(i = 0; i < n; i++) 
	       sum += arr[i];
        
        printf("%d\n", sum);
        return 0;
}

