class Solution {
public:
    long long sum(vector<int>& nums, int div) {
    long long add = 0;

    for(int i = 0; i < nums.size(); i++) {
       add += ceil((double)nums[i] / div);
    }

    return add;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int st = 1;
    int end = *max_element(nums.begin(), nums.end());
    int ans = -1;

    while(st <= end) {
        int mid = st + (end - st) / 2;

        long long totalSum = sum(nums, mid);

        if(totalSum <= threshold) {
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