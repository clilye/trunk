#include <iostream>

struct TreeNode {
 	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
	public:
		bool hasPathSum(TreeNode *root, int sum) {
			int count = 0;
			bool ret = false;

			TreeNode * p = root;

			if( p == NULL )
			{
				return false;
			}
			
			pf = p
			if( p->left != NULL )
				p = p->left

			count = count + p->val;
			if( p->left == NULL && p->right == NULL )
			{
				// leaf
				if( p == sum )
				{
					ret = true;
					break;
				}
				count = count - p->val;
				p = pf;
			}

			return ret;
		}
};

int main()
{
	bool ret = false;

	Solution a;
	ret = a.hasPathSum(NULL, 0);

	printf("%d\n", ret);
	return 0;
}

