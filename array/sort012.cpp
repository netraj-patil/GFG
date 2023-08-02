//{ Driver Code Starts
//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int p=0, q=0, r=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) p++;
            else if(a[i]==1) q++;
            else r++;
        }
        int i=0;
        while(p!=0){
            a[i]=0;
            i++;
            p--;
        }
        while(q!=0){
            a[i]=1;
            i++;
            q--;
        }
        while(r!=0){
            a[i]=2;
            i++;
            r--;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends