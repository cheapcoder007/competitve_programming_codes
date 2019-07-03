#include <bits/stdc++.h>
using namespace std;

int main() {
        string str;
        char a, b, c, d;
        cin >> str;
        unsigned int i = 0;
        while(i <= str.size() - 4) {
	       a = str[i];
	       b = str[i + 1];
	       c = str[i + 2];
	       d = str[i + 3];

	       if(a == b && c == d && b != c) {
		      str.erase(str.begin() + i + 3);
		      continue;
	       }
	       if(a == b && b == c) {
		      str.erase(str.begin() + i);
		      continue;
	       }
	       if(b == c && c == d) {
		      str.erase(str.begin() + i + 1);
		      continue;
	       }
	       i++;
        }
        cout << str << endl;
        return 0;
}
