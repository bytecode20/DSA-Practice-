Input: 5

Output:
* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*



Code:
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++
class Solution{
public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
       }
       for(int k=n-1;k>=1;k--)
       {
             for(int j=1;j<=k;j++)
            {
                cout<<"* ";
            }
           cout<<endl;
       }
        }
        
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
