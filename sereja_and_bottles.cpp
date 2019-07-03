#include <bits/stdc++.h>
using namespace std;

int n, ispresent[1001];
int main() {
        cin >> n;
        int arr[1001], i, j, result = 0;

        for(i = 1; i < n + 1; i++) {
	       cin >> arr[i] >> j;
	       if(arr[i] != j)
		      ispresent[j] = 1;
        }

        for(i = 1; i < n + 1; i++) {
	       if(!ispresent[arr[i]])
		      result++;
        }
        cout << result << endl;
        return 0;
}
