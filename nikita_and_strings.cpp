#include <bits/stdc++.h>
using namespace std;

int main() {
        string str;
        cin >> str;
        vector < int > vec;
        unsigned int i, j, tmp,val;
        for(i = 0; i < str.size();) {
	       if(str[i] == 'a') {
		      for(j = i; str[j] != 'b' && j < str.size(); j++);
		      vec.push_back(j - i);
		      i += j - i;
	       }
	       else {
		      for(j = i; str[j] != 'a' && j < str.size(); j++);
		      vec.push_back(j - i);
		      i += j - i;
	       }
        }
        for(i = 0; i < vec.size(); i++)
	       cout << vec[i] << " ";
        cout << endl;
        return 0;
}
