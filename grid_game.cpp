#include <bits/stdc++.h>
using namespace std;

int main() {
        string str;
        unsigned int vertical = 0, horizontal = 0, i;
        cin >> str;
        for(i = 0; i < str.size(); i++) {
	       switch(str[i]) {
		      case '0':
			     switch(vertical) {
				    case 0:
					   vertical = 1;
					   cout << "1 1" << endl;
					   break;
				    case 1:
					   vertical = 0;
					   cout << "3 1" << endl;
					   break;
			     }
			     break;
		      case '1':
			     switch(horizontal) {
				    case 0:
					   horizontal = 1;
					   cout << "1 3" << endl;
					   break;
				    case 1:
					   horizontal = 2;
					   cout << "2 3" << endl;
					   break;
				    case 2:
					   horizontal = 3;
					   cout << "3 3" << endl;
					   break;
				    case 3:
					   horizontal = 0;
					   cout << "4 3" << endl;
					   break;
			     
			     }
			     break;
	       }
        }
        return 0;
}
