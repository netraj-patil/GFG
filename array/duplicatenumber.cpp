//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        
        vector<int> dup;
        
        sort(arr,arr+n);
        int temp = arr[0], cnt=1;
        for(int i=1;i<n;i++){
            if(arr[i]==temp){
                cnt++;
                if(cnt==2){
                    dup.push_back(arr[i]);
                }
            }
            else{
                temp=arr[i];
                cnt=1;
            }
        }
        
        if(dup.empty()){
            return {-1};
        }
        
        return dup;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends