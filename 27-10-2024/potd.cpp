//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool findTriplet(vector<int>& arr) {

      int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=2;i<n;i++)
        {
           int j=i-1;
           int k=0;
           while(j>k)
           {
               if(arr[j]+arr[k]==arr[i])
               {
                  return true;
               }
               else if(arr[j]+arr[k]<arr[i])
               {
                   ++k;
               }
               else
               {
                   --j;
               }
           }
        }
        
        return false;
    }
};