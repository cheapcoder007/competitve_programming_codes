#include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m, result = 0, y, x, z, tmp, i;
        cin >> n >> m;
        vector < int > vec(m, 0);

        for(i = 0; i < n; i++) {
	       cin >> tmp;
	       vec[tmp % m]++;
        }

        for(x = 0; x < m; x++) {
	       for(y = x; y < m; y++) {
		      z = m - x - y;
		      if(z < 0)
			     z = 2 * m - x - y;
 
		      if(y > m / 2 && y != z)
			     continue;
		      if(((x == y) && (y == z))  || z >= m)
			     continue;
		      if((!(m % 2) || (x ==  m / 2)) && (x == y))
			     continue;

		      if(x == y)
			     result += ((vec[x] * (vec[x] - 1)) / 2) * vec[z];
		      else if(y == z)
			     result += ((vec[y] * (vec[y] - 1)) / 2) * vec[x];
		      else if(x == z)
			     result += ((vec[z] * (vec[z] - 1)) / 2) * vec[y];
		      else 
			     result += vec[x] * vec[y] * vec[z];
		      //cout << result << " " << x << " " << y << endl;
	       }
	       //cout << "NEW" << endl;
        }

		      
        //cout << result << " yes" << endl;
        for(i = 0; i < m; i++)
	       if(vec[i] >= 3)
		      result += (vec[i] * (vec[i] - 1) * ( vec[i] - 2)) / 6;

        cout << result  << endl;
        return 0;
}
