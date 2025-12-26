class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breaks = 0;

        for (int i = 0; i < n; i++) {
            int next = (i + 1 == n) ? 0 : i + 1;

            if (nums[i] > nums[next]) {
                breaks++;
            }

            if (breaks > 1)
                return false;
        }

        return true;
    }
};