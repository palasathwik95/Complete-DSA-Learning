class Solution {
public:
    int countSubarrays(vector<int>& nums, int maxSum) {
    int count = 1;
    int sum = 0;

    for(int i = 0; i < nums.size(); i++) {
        if(sum + nums[i] <= maxSum) {
            sum += nums[i];
        }
        else {
            count++;
            sum = nums[i];
        }
    }

    return count;
}

int splitArray(vector<int>& nums, int k) {
    int st = *max_element(nums.begin(), nums.end());

    int end = 0;
    for(int x : nums) {
        end += x;
    }

    int ans = -1;

    while(st <= end) {
        int mid = st + (end - st) / 2;

        int count = countSubarrays(nums, mid);

        if(count <= k) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }

    return ans;
}
};