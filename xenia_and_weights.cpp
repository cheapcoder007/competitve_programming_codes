#include <bits/stdc++.h>
using namespace std;

int main() {

        int i, j = 0, w, m, b;
        vector < int > vec;
        string str;
        cin >> str;
        for(i = 0; i < 10; i++) {
	       if(str[i] == '1')
		      vec.push_back(i + 1);
        }

        cin >> m;
        w = vec.size();
        b = m % 2;
        if(w <= 2) {
	       if(b) {
		      if(w == 1) {
			     if(m == 1) {
				    cout << "YES" << endl << "1" << endl;
				    return 0;
			     }
			     cout << "NO" << endl;
			     return 0;
		      }
		      else {
			     cout << "YES" << endl;
			     for(i = 0; i < m; i++) {
				    cout << vec[j++] << " ";
				    if(j == w)
					   j = 0;
			     }
			     return 0;
		      }
	       }
	       cout << "NO" << endl;
	       return 0;
        }

        cout << "YES" << endl;
        if(b) {
        for(i = 0; i < m; i++) {
	       cout << vec[j++] << " ";
	       if(j == w)
		      j = 0;
        }
        return 0;
        }
        else {
	       for(i = 0; i < m - 1; i++) {
		      cout << vec[j++] << " ";
		      if(j == 2)
			     j = 0;
	       }
	       cout << vec[2] << endl;
        }
        return 0;
}












