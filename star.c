#include <stdio.h>

void cal(int *, int);

int main() {

        int n;
        scanf("%d", &n);
        int arr[n], i;

        for( i = 0; i < n; i++)
	       scanf("%d", arr + i);

        cal(arr, n);

        return 0;
}

void cal(int *arr, int n) {

        int a, b, i;

        for(i = 0; i < n - 1; i++) {

	       if(arr[i + 1] < arr[i])
		      break;
        }
        if(i == n - 1) {
	       printf("yes\n1 1\n");
	       return ;
        }
        a = i;

        for(; i < n - 1; i++) {
	       if(arr[i + 1] > arr[i])
		      break;
        }


        b = i;

        if((a == 0) && (b == n -1)) {
	       printf("yes\n%d %d\n", a + 1, b + 1);
	       return ;
        }
        else if(!a) {

	       if(arr[b + 1] < arr[a]) {
		      printf("no\n");
		      return ;
	       }
        }
        else if(b == n - 1) {

	       if(arr[b] < arr[a - 1]) {
		      printf("no\n");
		      return ;
	       }
        }
        else if((arr[b + 1] < arr[a]) || (arr[b] < arr[a - 1])) {
	       printf("no\n");
	       return ;
        }

        for(i = b + 1; i < n - 1; i++) {
	       if(arr[i + 1] < arr[i]) {
		      printf("no\n");
		      return ;
	       }
        }

        printf("yes\n%d %d\n", a + 1, b + 1);

}
