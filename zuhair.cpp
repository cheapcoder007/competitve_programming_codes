#include <bits/stdc++.h>
using namespace std;

int main() {
       
        int i, len = 1, k, n, max = INT_MIN;
        vector < int > freq(26, 0);
        string str;
        cin >> n >> k >> str;
        for(i = 1; i < n; i++) {
	       if(str[i] == str[i - 1] && len < k)
		      len++;
	       else if(len == k){
		      freq[str[i - 1] - 97]++;
		      len = 1;
	       }
	       else
		      len = 1;
		      
        }
        if(len == k)
	       freq[str[n - 1] - 97]++;

        for(i = 0; i < 26; i++)
	       if(max < freq[i])
		      max = freq[i];
        cout << max << endl;
        return 0;
}
