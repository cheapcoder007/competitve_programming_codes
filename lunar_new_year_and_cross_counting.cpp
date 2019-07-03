#include <bits/stdc++.h>
using namespace std;

int main() {

        int n, i, j, ans = 0;
        cin >> n;
        char arr[n][n];
        for(i = 0; i < n; i++)
		      cin >> arr[i];
        for(i = 1; i < n - 1; i++)
	       for(j = 1; j < n - 1; j++)
		      if(arr[i - 1][j - 1] == 'X' && arr[i - 1][j + 1] == 'X' && arr[i][j] == 'X' && arr[i + 1][j - 1] == 'X' && arr[i + 1][j + 1] == 'X')
			     ans++;



        cout << ans << endl;
        return 0;
}
