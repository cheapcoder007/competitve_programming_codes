#include <bits/stdc++.h>
using namespace std;
int findn(vector < int > arr, int n);
int main() {

        int n, result;
        cin >> n;
        vector < int > arr(n);
      
        for(int i = 0; i < n; i++)
	       cin >> arr[i];

        result = findn(arr, n);
        cout << result << endl;
        return 0;
}

int findn(vector < int > arr, int n) {

        int i, j, count1 = 1, count2 = 1, count, val, maxcount = -1;

        for(i = 0; i < n; i++) {
	       for(j = 0; j < n; j++) {

		      if(i == j)
			     continue;
		      val = arr[i] - arr[j];
		      if(val == 0 || val == 1)
			     count1++;
		      if(val == 0 || val == -1)
			     count2++;
	       }


	       count1 > count2 ? count = count1: count = count2;
	       if(count > maxcount)
		      maxcount = count;
	       count1 = 1;
	       count2 = 1;
        }

        return maxcount;
}
