#include<stdio.h>
#include<string.h>
//assuming all the given lengths of the strings are sufficient
int stringreplace(char *text, char *orig, char *new) {
  int l, k, count=0, l1, l2, i;
    char s[128];
    l = strlen(text);
    l1 = strlen(orig);
    l2 = strlen(new);
    k = l1 - l2;
    for(i = 0; i < l; i++) {
      if((strncmp((text + i), orig, l1)) == 0) {
	count++;

	  if(k < 0) {
	     strcpy(s,(text+i+l1));
	     strcpy((text+i),new);
	     strcpy((text+i+l2),s);
	     l = (l - k);
	  }
	  else{
	      if(k > 0) {
	          strcpy(s,(text+i+l1));
		  strcpy((text+i),new);
        	  strcpy((text+i+l2),s);
		  l = (l - k);
	    }
	    else
		  strcpy((text+i),new);
	  }
      }
    }

     return count;
  
}
		
int main() {
    int count;
    char text[128], orig[128], new[128];
    while(scanf("%s%s%s",text,orig,new)!=-1) {
          count = stringreplace(text, orig, new);
	  printf("%d %s\n", count, text);
    }
}
