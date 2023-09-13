//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        // code here
        if(n==1)
            return arr;
        
         int index = -1;
        // step 1: find breakpoint
        for(int i = n-2; i>=0; i--)
        {
            if(arr[i] < arr[i+1])
            {
                index = i;
                break;
            }
        }
        
        // if breakpoint not found
        if(index == -1)
        {
            reverse(arr.begin(),arr.end());
            return arr;
        }
        
        // step 2: swap ind and next smallest element
        for(int i = n-1; i>=0; i--)
        {
            if(arr[index] < arr[i])
            {
                swap(arr[index],arr[i]);
                break;
            }
        }
        
        // revrese the remaining part of arr after breakpoint
        reverse(arr.begin()+index+1,arr.end());
        return arr;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends