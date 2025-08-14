class Solution:
    def countRevPairs(self, arr):
        # Code here
        def merge_sort(nums, left, right):
            if left >= right:
                return 0
            mid = (left + right) // 2
            count = merge_sort(nums, left, mid) + merge_sort(nums, mid + 1, right)
            
            # Count cross reverse pairs
            j = mid + 1
            for i in range(left, mid + 1):
                while j <= right and nums[i] > 2 * nums[j]:
                    j += 1
                count += (j - (mid + 1))

            # Merge step
            temp = []
            i, j = left, mid + 1
            while i <= mid and j <= right:
                if nums[i] <= nums[j]:
                    temp.append(nums[i])
                    i += 1
                else:
                    temp.append(nums[j])
                    j += 1
