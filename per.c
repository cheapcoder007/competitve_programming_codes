/*
 				 Yaroslav and Permutations
time limit per test
2 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

Yaroslav has an array that consists of n integers. In one second Yaroslav can swap two neighboring array elements. Now Yaroslav is wondering if he can obtain an array where any two neighboring elements would be distinct in a finite time.

Help Yaroslav.
Input

The first line contains integer n (1 ≤ n ≤ 100) — the number of elements in the array. The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 1000) — the array elements.
Output

In the single line print "YES" (without the quotes) if Yaroslav can obtain the array he needs, and "NO" (without the quotes) otherwise.
Examples
Input
Copy

1
1

Output

YES

Input

3
1 1 2

Output

YES

Input

4
7 7 7 7

Output

NO

Note

In the first sample the initial array fits well.

In the second sample Yaroslav can get array: 1, 2, 1. He can swap the last and the second last elements to obtain it.

In the third sample Yarosav can't get the array he needs.
*/
#include <stdio.h>

void cal(int *arr, int n);

int main() {

        int n, i;

        scanf("%d", &n);

       
        int arr[n];

        for(i = 0; i < n; i++)
	      scanf("%d", &arr[i]);
         
        cal(arr, n);
}

void cal(int *arr, int n) {

        int i, j, arey[n], a;

        for(i = 0; i < n - 1; i++) {

	       if(arr[i] == arr[i + 1]) {

		      a = arr[i];

		      for(j = i + 2; j <= ( n - 1); j++) {

			     if(arr[j] != a) {

				    arr[i + 1] = arr[j];
				    arr[j] = a;
				    break;
			     }
		      }

	       }
        }

        for(i = 0; i < n; i++) 

	       arey[i] = arr[n - i - 1];
         
        for(i = 0; i <= (n - 1); i++) {

	       if(arey[i] == arey[i + 1]) {

		      a = arey[i];

		      for(j = i + 2; j < n; j++) {

			     if(arey[j] != a) {

				    arey[i + 1] = arey[j];
				    arey[j] = a;
				    break;
			     }
		      }

	       }
         }
	
	for(i = 0; i < n; i++) {

	        if(arey[i] == arey[i+1]) {
		       printf("NO\n");
		       return;
	        }
	}

	printf("YES\n");
	return ;

}
