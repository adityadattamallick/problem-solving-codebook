class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        already_counted = set()

        for num in nums:
            if num in already_counted:
                return True
            already_counted.add(num)

        return False
