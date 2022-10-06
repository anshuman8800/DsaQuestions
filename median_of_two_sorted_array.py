# One Liner Solution

import numpy as np
class Solution(object):
def findMedianSortedArrays(self, nums1, nums2):
return np.median(np.array(nums1+nums2))
