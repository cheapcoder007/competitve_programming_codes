// C++ program to find the min and max element 
// of Vector using *min_element() in STL 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	// Get the vector 
	vector<int> a = { 1, 45, 54, 71, 76, 12 }; 

	// Print the vector 
	cout << "Vector: "; 
	for (int i = 0; i < a.size(); i++) 
		cout << a[i] << " "; 
	cout << endl; 

	// Find the min element 
	cout << "\nMin Element = "
		<< *min_element(a.begin(), a.end()); 

	// Find the max element 
	cout << "\nMax Element = "
		<< *max_element(a.begin(), a.end()); 
    a = { 9, 8, 1, 4, 6, 10};

	// Find the min element 
	cout << "\nMin Element = "
		<< *min_element(a.begin(), a.end()); 

	// Find the max element 
	cout << "\nMax Element = "
		<< *max_element(a.begin(), a.end()); 



    // initialize container 
    map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 10 }); 
    mp.insert({ 5, 50 }); 
    mp.insert({ 4, 40 }); 
    for (auto it = mp.begin(); it != mp.end(); it++) { 
        cout << (*it).first << " " << (*it).second << endl; 
    } 
  
    // when 2 is present 
    auto it = mp.lower_bound(2); 
    cout << "The lower bound of key 2 is "; 
    cout << (*it).first << " " << (*it).second << endl; 
  
    // when 3 is not present 
    // points to next greater after 3 
    it = mp.lower_bound(3); 
    cout << "The lower bound of key 3 is "; 
    cout << (*it).first << " " << (*it).second; 
  
    // when 6 exceeds 
    it = mp.lower_bound(6); 
    cout << "\nThe lower bound of key 6 is "; 
    cout << (*it).first << " " << (*it).second; 

	return 0; 
} 

