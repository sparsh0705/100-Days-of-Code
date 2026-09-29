 #include <stdio.h>

int main(void)
{
	int n, target;

	scanf("%d", &n);
	int nums[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	scanf("%d", &target);

	int left = 0, right = n - 1;
	int first = -1, last = -1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (nums[mid] == target) {
			first = mid;
			right = mid - 1;
		} else if (nums[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	left = 0;
	right = n - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (nums[mid] == target) {
			last = mid;
			left = mid + 1;
		} else if (nums[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	if (first == -1) {
		printf("-1, -1\n");
	} else {
		printf("First occurrence: %d (index %d)\n", target, first);
		printf("Last occurrence: %d (index %d)\n", target, last);
	}

	return 0;
}
