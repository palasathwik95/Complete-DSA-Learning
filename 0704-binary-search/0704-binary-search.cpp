class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;
        int end =n-1;
        int mid =0;
        while(st<=end){
            mid = (st+end)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]<target){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;
    }
};