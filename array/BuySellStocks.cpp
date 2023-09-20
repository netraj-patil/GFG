// Online C++ compiler to run C++ program online
//{ Driver Code Starts
//Initial template for C++

#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        int bi=0;
        vector<vector<int>> ans;
        
        for(int i=1;i<n;i++){
            if(i==bi+1){
                if(A[i]<=A[i-1]){
                    bi=i;
                }
            }
            else if(A[i]<A[i-1]){
                ans.push_back({bi,i-1});
                bi=i;
            }
            
        }
        
        if(bi!=A.size()-1){
            ans.push_back({bi,A.size()-1});
        }
        return ans;
    }
};

//{ Driver Code Starts.

int check(vector<vector<int>> ans, vector<int> A, int p)
{
    int c = 0;
    for(int i=0; i<ans.size(); i++)
        c += A[ans[i][1]]-A[ans[i][0]];
    return (c==p) ? 1 : 0;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n);
        for (int i=0; i<n; ++i){
            cin>>A[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.stockBuySell(A, n);
        int p = 0;
        for(int i=0; i<n-1; i++)
        {
            int x = A[i+1]-A[i];
            if(x>0)
                p += x;
        }
        if(ans.size()==0)
            cout<<"No Profit";
        else{
            for(int i=0;i<n;i++){
                cout<<ans[i][0]<<"  "<<ans[i][1]<<endl;
            }
            cout<<check(ans,A,p);
        }cout<<endl;
    }
    return 0;
}


// } Driver Code Ends