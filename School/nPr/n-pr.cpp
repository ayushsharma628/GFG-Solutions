//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long nPr(int n, int r){
        long de = n-r,nu=1,den=1;
        while(n>0)
        {
            nu*=n;
            if(de>0)
            {
            den *=de;
            de--;
            }
            n--;
        }
        return static_cast <long long> (nu)/den;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends