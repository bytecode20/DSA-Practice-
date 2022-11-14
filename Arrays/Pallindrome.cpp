Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome



Code::::

//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
#include<bits/stdc++.h>
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int l=0;
	    int r=S.length()-1;
	    while(l<r)
	    {
	        if(!isalnum(S[l]))//to find decimal or upper lowercharachter
	            l++;
	        else if(!isalnum(S[r]))
	            r--;
	       else if(tolower(S[l]!=tolower(S[r])))
	             return 0;
	       else
	       {
	           l++;
	           r--;
	       }
	       
	            
	    }
	    
	    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
