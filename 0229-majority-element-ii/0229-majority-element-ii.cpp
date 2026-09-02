class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int limit = n / 3;

        vector<int> temp;
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        
        for(auto x : mp) {
            if(x.second > limit) {
                temp.push_back(x.first);
            }
        }

        return temp;
    }
};