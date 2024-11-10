class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        vector<int>v;
        for(int i=0;i<b.size();i++){
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
        for(int j=0;j<a.size();j++){
            if(a[j]!=a[j+1]){
                v.push_back(a[j]);
            }
        }
        return v;
    }
};