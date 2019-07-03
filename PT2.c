/*. Pythagorean Theorem II
time limit per test
3 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

In mathematics, the Pythagorean theorem — is a relation in Euclidean geometry among the three sides of a right-angled triangle. In terms of areas, it states:
In any right-angled triangle, the area of the square whose side is the hypotenuse (the side opposite the right angle) is equal to the sum of the areas of the squares whose sides are the two legs (the two sides that meet at a right angle).

The theorem can be written as an equation relating the lengths of the sides a, b and c, often called the Pythagorean equation:
a2 + b2 = c2

where c represents the length of the hypotenuse, and a and b represent the lengths of the other two sides.

Given n, your task is to count how many right-angled triangles with side-lengths a, b and c that satisfied an inequality 1 ≤ a ≤ b ≤ c ≤ n.
Input

The only line contains one integer n (1 ≤ n ≤ 104) as we mentioned above.
Output

Print a single integer — the answer to the problem.
Examples
Input
Copy

5

Output
Copy

1

Input
Copy

74

Output
Copy

35
*/
#include <stdio.h>
int main() {

        int n, c = 1, f, u, count = 0;
        scanf("%d", &n);


        for(f = 1; f <= n/2; f++) {

	       for(u = f + 1; c <= n && ((u*u - f*f) <= (2*f*u)); u++) { 

		      c = f*f + u*u;

		      count++;
		      
		      printf("%d\n", c);
	       }

	       c = 0;
        }
        
        printf("%d\n", --count);
}
