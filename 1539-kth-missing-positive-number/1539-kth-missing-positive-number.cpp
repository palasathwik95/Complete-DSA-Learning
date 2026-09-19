class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
    int missing = 0;

    for(int i = 1; ; i++) {
        bool found = false;

        for(int j = 0; j < arr.size(); j++) {
            if(arr[j] == i) {
                found = true;
                break;
            }
        }

        if(!found) {
            missing++;

            if(missing == k) {
                return i;
            }
        }
    }
}
};