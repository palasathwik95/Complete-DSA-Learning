
class Solution {
public:
    vector<int> merged(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;

        for(int i = 0; i < nums1.size(); i++) {
            temp.push_back(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i++) {
            temp.push_back(nums2[i]);
        }

        sort(temp.begin(), temp.end());

        return temp;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp = merged(nums1, nums2);

        int n = temp.size();
        int mid = n / 2;

        if(n % 2 == 1) {
            return temp[mid];
        }
        else {
            return ((double)temp[mid] + temp[mid - 1]) / 2;
        }
    }
};
