class Solution{
public:
    void merge (vector <int> &nums1, int m, vector <int> &nums2, int n) {
	if (m == 0) {
	    nums1 = nums2;
	    return;
	}
	if (n == 0) return;

	m--;
	n--;

	while (m >= 0 && n >= 0) {
	    if (nums1[m] > nums2[n]) {
		nums1[m + n + 1] = nums1[m];
		m--;
	    } else {
		nums1[m + n + 1] = nums2[n];
		n--;
	    }
	}

	while (n >= 0) {
	    nums1[n] = nums2[n];
	    n--;
	}
    }
};
