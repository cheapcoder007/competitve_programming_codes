#include <bits/stdc++.h>
using namespace std;

int main() {
        unsigned int len = 0, i;
        string str;
        cin >> str;
        stack < char > st;

        st.push(str[0]);
        for(i = 1; i < str.size(); i++) {

	       if(!st.empty() && str[i] == st.top()) {
		      st.pop();
		      len++;
	       }
	       else 
		      st.push(str[i]);
        }
        if(len % 2)
	       cout << "YES" << endl;
        else
	       cout << "NO" << endl;

        return 0;
}
