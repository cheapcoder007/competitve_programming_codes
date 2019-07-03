#include <stdio.h>
int main() {

        int n , m;
        scanf("%d%d", &n, &m);

        int arr[m], diff[m], i, j, tmp, max = 1111, index = 1151;

        for(i = 0; i < m; i++) 
	       scanf("%d", arr + i);

        for(i = 0; i < m - 1; i++) { 
		      
		      for(j = 0; j < m - i - 1; j++) {

			     if(arr[j] > arr[j + 1]) {

				    tmp = arr[j + 1];
				    arr[j + 1] = arr[j];
				    arr[j] = tmp;
			     }
			      
	      }
        }

        for(i = 0; i <= m -n; i++) 
	       diff[i] = arr[i + n -1] - arr[i];

        index = --i; 

 
       for(i = 0; i <= index; i++) {

	      if(max > diff[i]) {
		     max = diff[i];
	      }
       }

       printf("%d\n", max);
}
