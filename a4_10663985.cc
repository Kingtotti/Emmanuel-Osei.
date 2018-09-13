#include <bits/stdc++.h> 
using namespace std; 

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
int main() 
{ 
	
	int user_input_1, user_input_2;
	
	cout<<"Enter Two Numbers" <<endl;
	
	cin>>user_input_1;
	
	cin>>user_input_2;
	
     
    cout << "GCD(" << user_input_1 << ", " << user_input_2 << ") = " << gcd(user_input_1, user_input_2) << endl; 
   
    return 0; 
} 
  
