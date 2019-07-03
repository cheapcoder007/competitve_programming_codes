/*
ppleman and Card Game
time limit per test
1 second
memory limit per test
256 megabytes
input
standard input
output
standard output

Appleman has n cards. Each card has an uppercase letter written on it. Toastman must choose k cards from Appleman's cards. Then Appleman should give Toastman some coins depending on the chosen cards. Formally, for each Toastman's card i you should calculate how much Toastman's cards have the letter equal to letter on ith, then sum up all these quantities, such a number of coins Appleman should give to Toastman.

Given the description of Appleman's cards. What is the maximum number of coins Toastman can get?
Input

The first line contains two integers n and k (1 ≤ k ≤ n ≤ 105). The next line contains n uppercase letters without spaces — the i-th letter describes the i-th card of the Appleman.
Output

Print a single integer – the answer to the problem.
Examples
Input
Copy

15 10
DZFDFZDFDDDDDDF

Output
Copy

82

Input
Copy

6 4
YJSNPI

Output
Copy

4



*/
#include <stdio.h>

int main() {

        int k, n, no = 0, sum = 0, f = 0, i, j, fr = 0; 
        scanf("%d%d", &n, &k);

        char str[n], ch, chr;
        scanf("%s", str);

	   while(1) {

		  for(i = 0; i < n; i++) {

			 if(str[i] == ' ')
				continue ;

			 for(j = i; j < n; j++) {

				if(str[i] == str[j]) {
				        f++;
				        ch = str[i];
				}

			 }
			 if(f > fr) {
				fr = f;
				chr = ch;

			 }
			 f = 0;
			 }
			 for(i = 0; i < n; i++) {

			 if(str[i] == chr) 
				str[i] = ' ';
			 }


		  if( fr < (k - no)) {
			 sum += fr*fr;
			 no += fr;
		  }
		  else {
			 sum += (k - no) * (k - no);
			 break;
		  }
		  fr = -1;
	   }

        printf("%d\n", sum);
}
