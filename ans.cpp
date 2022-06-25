class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int i;
        vector<int> v;
        map<int,int>mpp;
        for(i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
         for (auto x: mpp) 
         {
            if (x.second > (n / 3))
            {
                v.push_back(x.first);
            }
         }
        return v;
        
    }
};
