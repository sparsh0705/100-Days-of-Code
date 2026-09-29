 #include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		int nextGreater = -1;

		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[i]) {
				nextGreater = arr[j];
				break;
			}
		}

		if (i > 0) {
			printf(",");
		}
		printf("%d", nextGreater);
	}

	return 0;
}
