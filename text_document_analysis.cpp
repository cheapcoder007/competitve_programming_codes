#include <bits/stdc++.h>
using namespace std;

int main() {
        string str;
        int n;
        cin >> n;
        cin >> str;
        int i, len  = 0, words = 0, maxlen = 0;
        for(i = 0; i < n;) {
	       switch(str[i]) {
		      case '_':
			     break;
		      case '(':
			     for(;str[i] != ')'; i++);
			     break;
		      default :
			     for(; i < n && str[i] != '(' && str[i] != '_'; i++)
				    len++;
			     if(len > maxlen)
				    maxlen = len;
			     break;
	       }
	       if(str[i] != '(')
		      i++;
	       len = 0;
        }
        for(i = 0; i < n; i++) {
	       switch(str[i]) {
		      case '(':
			     i++;
			     while(i < n && str[i] != ')') {
				    switch(str[i]) {
					   case '_':
						  break;
				  	   case ')':
						  break;
					   default :
						  for(; i < n && str[i] != ')' && str[i] != '_'; i++);
						  words++;

				    }
				    if(str[i] != ')')
					   i++;
			     }
	       }
        }

        cout << maxlen << " " << words << endl;
        return 0;
}
