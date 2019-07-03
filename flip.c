/* 
Flipping Game
time limit per test
1 second
memory limit per test
256 megabytes
input
standard input
output
standard output

Iahub got bored, so he invented a game to be played on paper.

He writes n integers a1, a2, ..., an. Each of those integers can be either 0 or 1. He's allowed to do exactly one move: he chooses two indices i and j (1 ≤ i ≤ j ≤ n) and flips all values ak for which their positions are in range [i, j] (that is i ≤ k ≤ j). Flip the value of x means to apply operation x = 1 - x.

The goal of the game is that after exactly one move to obtain the maximum number of ones. Write a program to solve the little game of Iahub.
Input

The first line of the input contains an integer n (1 ≤ n ≤ 100). In the second line of the input there are n integers: a1, a2, ..., an. It is guaranteed that each of those n values is either 0 or 1.
Output

Print an integer — the maximal number of 1s that can be obtained after exactly one move.
Examples
Input
Copy

5
1 0 0 1 0

Output
Copy

4

Input
Copy

4
1 0 0 1

Output
Copy

4

Note

In the first case, flip the segment from 2 to 5 (i = 2, j = 5). That flip changes the sequence, it becomes: [1 1 1 0 1]. So, it contains four ones. There is no way to make the whole sequence equal to [1 1 1 1 1].

In the second case, flipping only the second and the third element (i = 2, j = 3) will turn all numbers into 1.

*/

#include <stdio.h>

int main() {

        int n;

        scanf("%d", &n);

        int arr[n], index[n + 1], val = -1, max = 0, c = 0, l = 0, i, j = 1;

        for(i = 1; i < n + 1; i++) {
	       scanf("%d", &arr[i]);

	       if(arr[i]) {
		      l++;
		      index[j++] = i;
	       }
        }
        if(l == n) {
            max = l -1;
        }
        else if(!l) {
	       max = n;
        }
        else{
        i = 1;

        if(!(arr[1]) && !(arr[n])) {
	       index[0] = 0;
	       index[l + 1] = n + 1;
	       l += 2;
	       i = 0;
	       c = 1;
        }
        else if(!(arr[1])) { 
	       index[0] = 1;
	       i = 0;
	       l++;
	       c = 2;
        }
        else if(!(arr[n])) {
	       index[l + 1] = n + 1;
	       l++;
	       c = 3;
        }

        for(; i < l + 1; i ++) {

	       for(j = i + 1; j < l + 1; j++) {

		      val = (index[j] - index[i] - 1) - (j - i -1) + i + (l - j + 1);
		      printf("%d %d %d %d %d\n", index[i], index[j], i, j, val);

		      if( val > max)
			     max = val;
	       }
        }
 //       printf("%d = val\n", max);
        
        switch(c) {

	       case 0:
		      break;
	       case 1:
		      max -= 2;
		      break;
	       case 2:
		      max -= 1;
		      break;
	       case 3:
		      max -= 1;
		      break;
        }
}

        printf("%d\n", max);
}
        
