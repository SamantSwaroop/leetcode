class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int j=0;
        int maxlen=1;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
                while(j<=i && mp[nums[i]]>k)
                {
                    mp[nums[j]]--;
                    j++;
                }
                         maxlen=max(maxlen,i-j+1);
        }
        return maxlen;
    }
};