class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def sortedArrayToBST(nums):
    if not nums:
        return None
    
    mid = len(nums) // 2
    root = TreeNode(nums[mid])
    
    root.left = sortedArrayToBST(nums[:mid])
    root.right = sortedArrayToBST(nums[mid+1:])
    
    return root

def inorderTraversal(root):
    if not root:
        return []
    return inorderTraversal(root.left) + [root.val] + inorderTraversal(root.right)

# Test cases
nums1 = [-10, -3, 0, 5, 9]
root1 = sortedArrayToBST(nums1)
print(inorderTraversal(root1))  # Output: [-10, -3, 0, 5, 9]

nums2 = [1, 3]
root2 = sortedArrayToBST(nums2)
print(inorderTraversal(root2))  # Output: [1, 3]
