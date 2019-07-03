#include <cmath>
#include <iostream>
using namespace std;

int main() {

        int n, i, x;
        long long int count = 0;
        long long int mean1, sum = 0;
        bool breaker = true;
        cin >> n;
        long double mean;

        if(n <= 2)
	       cout << "YES" << endl;
        else {
                 int arr[n];

        for(i = 0; i < n; i++) {

	       cin >> arr[i];
	       if(i > 0)
		      if(arr[i] == arr[i - 1])
			     count++;
        }
        if(count == n - 1)
	       cout << "YES" << endl;
        else {


	       cout << count << endl;
	       for(i = 0; i < n; i++)
		      sum += arr[i];
	        
	       mean = (double) sum / n;
//        cout << mean << endl;
        mean1 = mean;
        if(mean > mean1)
	       mean = ++mean1;
//        cout << mean;
        for(i = 0; i < n; i++)
	       if(x = abs(arr[i] - mean))
		      break;

        for(int j = 1; j < n; j++) {

	       if(abs(arr[j] - mean) != x && (arr[j] - mean)) {
		      breaker = false;
		      cout << "NO" << endl;
		      break;
	       }

        }

        if(breaker)
	       cout << "YES" << endl;

        return 0;


        }

       
        }

}
