/*
  Football
 time limit per test
 2 seconds
 memory limit per test
 256 megabytes
 input
 standard input
 output
 standard output

 One day Vasya decided to have a look at the results of Berland 1910 Football Championship’s finals. Unfortunately he didn't find the overall score of the match; however, he got hold of a profound description of the match's process. On the whole there are n lines in that description each of which described one goal. Every goal was marked with the name of the team that had scored it. Help Vasya, learn the name of the team that won the finals. It is guaranteed that the match did not end in a tie.
 Input

 The first line contains an integer n (1 ≤ n ≤ 100) — the number of lines in the description. Then follow n lines — for each goal the names of the teams that scored it. The names are non-empty lines consisting of uppercase Latin letters whose lengths do not exceed 10 symbols. It is guaranteed that the match did not end in a tie and the description contains no more than two different teams.
 Output

 Print the name of the winning team. We remind you that in football the team that scores more goals is considered the winner.
 Examples
 Input
 Copy

 1
 ABC

 Output
 Copy

 ABC

 Input
 Copy

 5
 A
 ABA
 ABA
 A
 A

 Output
 Copy

 A
 */

#include <string.h>
#include <stdio.h>

int main() {

        int n;
        scanf("%d", &n);
        
        char chr[11], chart[11], sh[11];

        int i, c1 = 0, c2 = 0;

        scanf("%s", chart);


        strcpy(sh, chart);

        for(i = 0; i < n - 1; i++) {

	        
	       if(strcmp(sh, chart)) { 
	       	      strcpy(chr,chart);
		      c2++;
	       }
	       else {
		      c1++;
	       }
	        
	       scanf("%s", chart);

        }
        if(strcmp(sh, chart)) { 
	       	      strcpy(chr,chart);
		      c2++;
	       }
	       else {
		      c1++;
	       }
	
         
        if(c2 > c1) {
	       printf("%s\n", chr);
        }
        else
	       printf("%s\n", sh);
}
