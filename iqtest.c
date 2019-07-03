/*
 . IQ Test
 time limit per test
 2 seconds
 memory limit per test
 256 megabytes
 input
 standard input
 output
 standard output

 In the city of Ultima Thule job applicants are often offered an IQ test.

 The test is as follows: the person gets a piece of squared paper with a 4 × 4 square painted on it. Some of the square's cells are painted black and others are painted white. Your task is to repaint at most one cell the other color so that the picture has a 2 × 2 square, completely consisting of cells of the same color. If the initial picture already has such a square, the person should just say so and the test will be completed.

 Your task is to write a program that determines whether it is possible to pass the test. You cannot pass the test if either repainting any cell or no action doesn't result in a 2 × 2 square, consisting of cells of the same color.
 Input

 Four lines contain four characters each: the j-th character of the i-th line equals "." if the cell in the i-th row and the j-th column of the square is painted white, and "#", if the cell is black.
 Output

 Print "YES" (without the quotes), if the test can be passed and "NO" (without the quotes) otherwise.
 Examples
 Input
 Copy

####
.#..
####
....

Output
Copy

YES

Input
Copy

####
....
####
....

Output
Copy

NO

Note

In the first test sample it is enough to repaint the first cell in the second row. After such repainting the required 2 × 2 square is on the intersection of the 1-st and 2-nd row with the 1-st and 2-nd column.

*/

#include <stdio.h>
int main() {

        int i = 0, j = 0, v, r = 0;
        char ar[4][4];

        for(i = 0; i < 4; i++) {
	       for(j = 0; j < 4; j++) {
		      scanf("%c", &ar[i][j]);
		      if(ar[i][j] == '\n') {
			     j--;
			     continue;
		      }
		      if(ar[i][j] == 35)
			     ar[i][j] = ' ';
		      else {
			     ar[i][j] = '\0';
		      }
	       }
        }


        for(i = 0; i < 3; i++) {

	       for(j = 0; j < 3; j++) {

		      v = ar[i][j] + ar[i+1][j] + ar[i][j+1] + ar[i+1][j+1];

		      if( v == 3*32 || v == 4*32 || v == 32 || v == 0) {
			     r = 1;
			     break;
		      }
	       }
	       if(r)
		      break;
        }

        
        if(r)
	       printf("YES\n");
        else
	       printf("NO\n");
        
}		      
