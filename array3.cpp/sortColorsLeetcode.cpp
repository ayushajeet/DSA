class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0;
        int mi = 0;
        int hig = nums.size()-1;
        while(mi<=hig){
            if(nums[mi]==2) {
                int temp = nums[mi];
                nums[mi]=nums[hig];
                nums[hig]=temp;
                hig--;
            }
            else if(nums[mi]==0) {
                int temp = nums[mi];
                nums[mi]=nums[lo];
                nums[lo]=temp;
                lo++;
                mi++;
            }
            else mi++;
        }
        return ;
    }
};