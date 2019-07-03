#include <stdio.h> 

void myfun(char *str, int l, int k);

int main() {

              
                int n, t;
	               
	       scanf("%d%d", &n, &t);
	
	       char str[n];
	
	       scanf("%s", str);
				            
	       myfun(str, n, t);
	
	       printf("%s\n", str);

}

void myfun(char *str, int n, int t) {
        int i, j;
        char ch;

        for(j = 1; j < t + 1; j++) {

	       for(i = 0; i < n - 1; i++) {
	
		      if((str[i] == 'B') && (str[i + 1] == 'G')) { 

			     str[i] = 'G';
			     str[i +1] = 'B';
			     i++;
																	     	       
		      }
		
	       }
	
					           
        }
}
