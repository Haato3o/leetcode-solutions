int findDuplicate(int* nums, int numsSize){
    int i;
    int turtle = 0;
    int hare = turtle + 1;
    while (true) {
        if (nums[turtle] == nums[hare]) {
            return nums[turtle];
        }
        turtle = (turtle + 1) % numsSize;
        hare = (hare + 2) % numsSize;
        if (turtle == hare) {
            hare = (hare + 1) % numsSize;
        }
    }
    return 0;
}