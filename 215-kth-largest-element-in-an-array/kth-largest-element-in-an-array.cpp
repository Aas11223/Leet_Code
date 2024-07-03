class Solution {
public:
    
    int partition(vector<int>& nums, int left, int right, int pivot_index) {
        int pivot = nums[pivot_index];
        // Move pivot to end
        swap(nums[pivot_index], nums[right]);
        int store_index = left;
        // Move all smaller elements to the left
        for (int i = left; i < right; ++i) {
            if (nums[i] < pivot) {
                swap(nums[store_index], nums[i]);
                store_index++;
            }
        }
        // Move pivot to its final place
        swap(nums[right], nums[store_index]);
        return store_index;
    }

    int quickselect(vector<int>& nums, int left, int right, int k_smallest) {
        if (left == right) {
            return nums[left];
        }
        // Select a random pivot_index between left and right
        int pivot_index = left + rand() % (right - left + 1);
        // Find the pivot position in a sorted list
        pivot_index = partition(nums, left, right, pivot_index);
        // The pivot is in its final sorted position
        if (k_smallest == pivot_index) {
            return nums[k_smallest];
        } else if (k_smallest < pivot_index) {
            return quickselect(nums, left, pivot_index - 1, k_smallest);
        } else {
            return quickselect(nums, pivot_index + 1, right, k_smallest);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end(),greater<int>());
        // return nums[k-1];
        int size = nums.size();
        return quickselect(nums, 0, size - 1, size - k);
    }
};