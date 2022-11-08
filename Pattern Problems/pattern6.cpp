Input: 5

Output:
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
  
  
  Code:

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i=1;

        while(i<=n)

        {

            int j=1;

            while(j<=i)

            {

                cout<<j<<" ";

                j++;

            }

            int space=(n-i)*2;

            while(space>=1)

            {

                cout<<"  ";

                space--;

            }

            j=1;

            while(j<=i)

            {

                cout<<i-j+1<<" ";

                j++;

            }

            cout<<endl;

            i++;

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
