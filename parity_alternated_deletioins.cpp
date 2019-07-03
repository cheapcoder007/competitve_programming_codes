#include <bits/stdc++.h>
using namespace std;

int main() {
        long long int n, i, odd_len, even_len, result = 0, diff;
       
        cin >> n;
        
        vector < long long int > vec(n, 0), odd, even;

        for(i = 0; i < n; i++) {
	       cin >> vec[i];
	       if(vec[i] % 2)
		      odd.push_back(vec[i]);
	       else
		      even.push_back(vec[i]);
        }
        odd_len = odd.size();
        even_len = even.size();
        if(abs(odd_len - even_len) < 2) {
	       cout << "0" << endl;
	       return 0;
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        diff = abs(odd_len - even_len);

        if(odd_len > even_len) {
	       for(i = 0; i < diff; i++)
		      result += odd[i];
	       if(!even_len)
		      result -= odd[odd.size() - 1];
	       else
		      result -= odd[diff - 1];
        }
        else {
	       for(i = 0; i < diff; i++)
		      result += even[i];
	       if(!odd_len)
		      result -= even[even.size() - 1];
	       else
		      result -= even[diff - 1];
        }
        
        cout << result << endl;
        return 0;
}
