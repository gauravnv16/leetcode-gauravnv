//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool isValid(long long n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        
        if(n&(n-1)) return 0;
        return 1;
    }
    int findPosition(int N) {
        
        if(isValid(N)){
            int count = 0;
            
            while(N != 0){
                count ++;
                N = N>>1;
            }
            return count;
        }else{
            return -1;
        }
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends