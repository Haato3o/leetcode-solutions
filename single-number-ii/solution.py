class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ptr1 = 0
        ptr2 = 1
        ptr3 = 2
        nums.sort()
        for i in range(len(nums)):
            if (ptr2 >= len(nums)):
                return nums[-1]
            if (nums[ptr1] == nums[ptr2] == nums[ptr3]):
                ptr1 += 3
                ptr2 += 3
                ptr3 += 3
            else:
                return nums[ptr1]