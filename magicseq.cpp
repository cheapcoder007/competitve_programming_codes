#include <bits/stdc++.h>
using namespace std;

int main() {
        int N, found = 0, result = 0, pairs = 0, i;
        string str;
        stack < char > st;
        cin >> N >> str;

        for(i = 0; i < N; i++) {
	       switch(str[i]) {
		      case '(':
			     if(found > 0 && !st.empty()) {
				    found--;
				    result += st.size();
				    st.pop();
//				    pairs++;
			     }
			     else
				    st.push('(');
			     break;
		      case ')':
			     if(st.empty()) {
				    found++;
				    st.push(')');
			     }
			     else if(st.top() == ')') {
				    found++;
				    st.push(')');
			     }
			     else {
				    if(found) {
					   result++;
//					   pairs++;
					   st.pop();
				    }
				    else {
					   result++;
					   st.pop();
				    }
			     
	       
			     }
			     break;
	       }
	       if(!found)
		      pairs = 0;
        }

        cout << result << endl;
        return 0;
}
