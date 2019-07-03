#include <bits/stdc++.h>
using namespace std;

string str;
 
int k, n;
bool check(int l) 
{
        int u = k;
        for (int j = l; u--; j++) 
	       if (str[j] != str[l]) 
		      return false; 
        return true; 
} 


int main() {

        cin >> n >> k >> str;
        vector < int > freq(26, 0);
        int i, max = INT_MIN;
        for(i = 0; i <= n - k; i++) {
	       if(check(i)) {
		      freq[str[i] - 97]++;
		      i--;
		      i += k;
	       }
        }

        for(i = 0; i < 26; i++)
	       if(max < freq[i])
		      max  = freq[i];
        cout << max << endl;
        return 0;
}
