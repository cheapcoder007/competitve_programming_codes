#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, i, j, page;
        cin >> n;
        vector < vector < int > > vec(n, vector < int > (2));
        for(i = 0; i < n; i++)
	       for(j = 0; j < 2; j++)
		      cin >> vec[i][j];
        cin >> page;
        for(i = 0; i < n; i++)
	       if(page >= vec[i][0] && page <= vec[i][1])
		      break;
        cout << n - i<< endl;
        return 0;
}
