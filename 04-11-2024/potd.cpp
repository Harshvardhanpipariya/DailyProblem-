class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        int tmp = 0;
        int p = 0;
        vector<vector<int>> res;
        for(int i=0;i<(arr.size()-2);i++)
        {
            for(int j=i+1;j<(arr.size()-1);j++)
            {
                for(int k=j+1;k<arr.size();k++)
                {
                    tmp = arr[i]+arr[j]+arr[k];
                    if(tmp == 0)
                    {
                        res.push_back({i, j, k});
                    }
                }
            }
        }
        
        return res;
    }

};