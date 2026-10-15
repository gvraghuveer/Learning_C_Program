#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    int maxReach = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) return false;
        int curr = i + nums[i];
        if (curr > maxReach) maxReach = curr;
        if (maxReach >= numsSize - 1) return true;
    }
    return false;
}

int main() {
    int nums[] = {2, 3, 1, 1, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    printf("Can jump: %s\n", canJump(nums, size) ? "true" : "false");

    return 0;
}