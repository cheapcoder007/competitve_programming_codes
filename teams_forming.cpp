#include <bits/stdc++.h>
using namespace std;

int main() {

        int i, j, n, result = 0, tmp;
        cin >> n;
        int arr[n];

        for(i = 0; i < n; i++)
	       cin >> arr[i];
        for(i = 0; i < n; i++) {
	       for(j = 0; j < n; j++) {
		      if(arr[j] > arr[i]) {
			     tmp = arr[i];
			     arr[i] = arr[j];
			     arr[j] = tmp;
		      }
	       }
        }

        for(i = 0; i < n; i += 2)
	       result += arr[i + 1] - arr[i];

        cout << result << endl;
        return 0;
}
