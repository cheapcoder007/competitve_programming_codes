#include <bits/stdc++.h>
using namespace std;

int main() {

        unsigned int n, i, j, tmp, val, m;
        cin >> n;
        vector < unsigned int > arr(n, 0);
        for(i = 0; i < n; i++) {
	       cin >> arr[i];
        }

        for(i = 0; i < arr.size(); i++) {
	       for(j = 0; j < arr.size(); j++) {
		      if(arr[i] >  arr[j]) {
			     tmp = arr[j];
			     arr[j] = arr[i];
			     arr[i] = tmp;
		      }
	       }
        }

        for(i = 0; i < arr.size() - 1; i++)
	       if(arr[i] == arr[i + 1])
		      arr.erase(arr.begin() + i);
/*
        cout << endl;
        for(i = 0; i < arr.size(); i++)
	       cout << arr[i] << " ";

        cout << endl;

        return 0;
 */       cin >> m;

        for(i = 0; i < m; i++) {
	       cin >> val;
	       for(j = 0; j < arr.size(); j++) {
		      if(val >= arr[j]) {
			     cout << j + 1 << endl;
			     break;
		      }
	       }
	       if(j == arr.size())
		      cout << j + 1<< endl;
        }


        return 0;
}
