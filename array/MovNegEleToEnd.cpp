//{ Driver Code Starts
#include<iostream>
#include<queue>
#include<conio.h>

using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int ans[n];
        int j=0;
        queue<int> neg;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                neg.push(arr[i]);
            }
            else{
                ans[j] = arr[i];
                j++;
            }
        }
        
        for(int i=0;i<j;i++){
            arr[i] = ans[i];
        }
        
        while(!neg.empty()){
            arr[j]=neg.front();
            neg.pop();
            j++;
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends