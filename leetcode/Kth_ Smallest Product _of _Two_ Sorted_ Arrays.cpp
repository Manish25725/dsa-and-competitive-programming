long long countPairs(vector<int>& nums1, vector<int>& nums2, long long x) {
    long long count = 0;
    int m = nums2.size();

    for (int a : nums1) {
        if (a == 0) {
            if (x >= 0) count += m;
        } else if (a > 0) {
            // manual upper_bound
            int left = 0, right = m - 1, pos = -1;
            long long target = x / a;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums2[mid] <= target) {
                    pos = mid;
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
            count += (pos + 1);
        } else {
            // a < 0: manual lower_bound
            int left = 0, right = m - 1, pos = m;
            long long target = x / a;
            if (x % a != 0) target++; // ceil
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (nums2[mid] >= target) {
                    pos = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            count += m - pos;
        }
    }
    return count;
}



 long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
        long long low = -1e10, high = 1e10;

        while (low < high) {
            long long mid = (low + high) / 2;
            if (countPairs(nums1, nums2, mid) >= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }