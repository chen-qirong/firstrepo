#include<stdio.h>
int main()
{
	int nums[5]={1,2,3,4,5};
	binarySearch(nums,3);
	return 0;
}



public int binarySearch(int[] nums, int target) {
    if (nums == null || nums.length == 0) {
        return -1;
    }
    //
    int left = 0;
    int right = nums.length - 1;
    
    while (left + 1 < right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            right = mid;
        } else if (nums[mid] < target) {
            left = mid;
            // or left = mid + 1;
        } else {
            right = mid;
            // or right = mid -1;
        }
    }
    
    if (nums[left] == target) {
        return left;
    }
    
    if (nums[right] == target) {
        return right;
    }
    
    return -1;
}

