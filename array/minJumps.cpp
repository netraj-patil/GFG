//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jump=0;
        int i=0;
        while(i<n-1){
            if(arr[i]==0)   return -1;
            if(n-1<=i+arr[i])  return jump+1;
            if(arr[i]==1) {
                jump+=1;
                i+=1;
                continue;
            }
            
            jump+=1;
            int max = arr[i+1], index = i+1;
            int j=i+1;
            for(int k=1;k<arr[i];k++){
                int temp= k+arr[j+k];
                if(temp > max){
                    max = temp;
                    index = j+k;
                }
            }
            i=index;
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends