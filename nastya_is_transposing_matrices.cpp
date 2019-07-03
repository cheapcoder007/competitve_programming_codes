#include <bits/stdc++.h>
using namespace std;

int main() {
        long long n, m, i, j, n1;
        cin >> n >> m;
        vector < vector < long long > > vec1(n, vector < long long > (m)), vec2(n, vector < long long > (m));;
        for(i = 0; i < n; i++)
	       for(j = 0; j < m; j++)
		      cin >> vec1[i][j];
        for(i = 0; i < n; i++)
	       for(j = 0; j < m; j++)
		      cin >> vec2[i][j];
        if(vec1[0][0] != vec2[0][0] || vec1[n - 1][n - 1] != vec2[n - 1][n - 1]) {
	       cout << "NO 542" << endl;
	       return 0;
        }
        for(n1 = 1; n1 <= 2 * (n - 2) + 1; n1++) {

		      
	       map < int, int > m1, m2;
	       if(n1 <= n - 1 ) {
		      for(j = 0, i = n1; j <= n1; j++, i--)  {
			     m1[vec1[i][j]]++;
			     m2[vec2[i][j]]++;
		      }
		      for(unsigned int k = 0; k < m1.size(); k++) {
			     if(m1[k] != m2[k]) {
				    cout << "NO 13" << endl;
				    return 0;
			     }
	       
		      }
	       }
	       else {
		      for(j = 2 * (n - 2) + 1 - n1, i = n - 1; j >= 0; j--, i--)  {
			     m1[vec1[i][j]]++;
			     m2[vec2[i][j]]++;
		      }
		      for(unsigned int k = 1; k <= m1.size(); k++) {
			     if(m1[k] != m2[k]) {
				    cout << "NO 25" << k << endl;
				    return 0;
			     }
			     cout << k << endl;
	       
		      }
	       }
        
        }
        cout << "YES" << endl;
        return 0;
}
