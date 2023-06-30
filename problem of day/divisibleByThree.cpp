//{ Driver Code Starts

//given a binary number
/*check if its decimal equivalent is divisible by 3*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int l= s.length();
	    int o=0,e=0;
	    
	    for(int i=0;i<l;i++){
	        if(s[i]=='1'){
	            if(i%2==0) o++;
	            else e++;
	        }
	    }
	    
	    return (o-e)%3==0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends