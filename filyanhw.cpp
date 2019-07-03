#include <iostream>
#include <cmath>
using namespace std;

int main() {

        int i, diff = 0, n;
        cin >> n;
        int arr[n];
        bool result = 1;

        for(int i = 0; i < n; i++)
	       cin >> arr[i];
        if(n <= 2) {
	       cout <<  "YES" << endl;
        }
        else {

		 
	       for(i = 0; i < n - 2; i++) {
	      
	       if(arr[i] == arr[i + 1])
		      continue;

	       diff = abs(arr[i] - arr[i + 1]);
	       break;
        }

        for(i = 0; i < n - 2; i++) {

	       if(arr[i] == arr[i + 1])
		      continue;
	       if((arr[i] - diff == arr[i + 1]) || (arr[i] + diff == arr[i + 1]))
		      continue;
	       else {
		      result = 0;
		      cout << "NO" << endl;
	       }
        }

        if(result)
	       cout << "YES" << endl;
        return 0;
        }
}
