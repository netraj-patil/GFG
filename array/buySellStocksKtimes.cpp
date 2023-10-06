//{ Driver Code Starts
// Initial template for C++

// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        // code here
        int bi=0;//buying index
        vector<int> ans;
        
        for(int i=1;i<N;i++){
            if(i==bi+1){
                if(A[i]<=A[i-1]){
                    bi=i;
                }
            }
            else if(A[i]<A[i-1]){
                ans.push_back(A[i-1]-A[bi]);
                bi=i;
            }
            
        }
        
        if(bi!=N-1){
            ans.push_back(A[N-1]-A[bi]);
        }
        
        sort(ans.begin(), ans.end());
        
        int i=ans.size()-1;
        int s=0;
        while(i>0 && K>0){
            s+=ans[i];
            i--;
            K--;
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends