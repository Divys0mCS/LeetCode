class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};
    //     int min = nums[0];
    //     int beg = 0;
    //     int end = nums.size()-1;
    //     while (beg <= end) {
    //         int mid = beg + (end - beg) / 2;
    //         if (nums[mid] == target) {
    //             return mid;
    //         }
    //         else if(nums[mid] > target){
    //             end = mid - 1;
    //         }
    //         else{
    //             beg = mid + 1; 
    //         }
    //     }
    //     return beg;
    // }