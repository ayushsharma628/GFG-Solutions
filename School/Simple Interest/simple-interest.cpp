//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    double simpleInterest(int P, int R, int T) {
        return static_cast <double> (P*R*T)/100;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int P, R, T;
        cin >> P >> R >> T;
        Solution ob;
        cout << fixed << setprecision(2);
        cout << ob.simpleInterest(P, R, T) << "\n";
    }
}

// } Driver Code Ends