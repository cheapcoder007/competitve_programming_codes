#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int main() {
        int n, i, length = INT_MIN, index;
        scanf("%d", &n);
        if(n == 2) {
	       printf("PS\n");
	       return 0;
        }
        char **str, tmp[100], tmp1[100], tmp2[100];

        for(i = 0; i < 2 * n - 2; i++) {
	       scanf(" %s", tmp);
	       str[i] = (char *)malloc(strlen(tmp + 1));
	       strncpy(str[i], tmp, strlen(tmp));
//	       str[i][strlen(tmp + 1)] = '\0';
        }

        for(i = 0; i < 2 * n - 2; i++)
	       printf("%s %d\n", str[i], strlen(str[i]));
        for(i = 0; i < 2 * n - 2; i++) {
		      printf("y\n");
	       if(length < strlen(str[i])) {
		      printf("y\n");
		      strncpy(tmp1, str[i], strlen(str[i]));
		      printf("y\n");
		      length = strlen(str[i]);
		      index = i;
	       }
        }
/*
        length = INT_MIN;
        for(i = 0; i < n; i++) {
	       if(i == index)
		      continue;
	       if(length < strlen(str[i])) {
		      strncpy(tmp2, str[i], strlen(str[i]));
		      length = strlen(str[i]);
		      index = i;
	       }
        }

        printf("%s %s\n", tmp1, tmp2);
*/
        return 0;
}
