 #include <stdio.h>

int main(void)
{
	int n, value;

	scanf("%d", &n);

	int array[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	scanf("%d", &value);

	int position = n;
	while (position > 0 && array[position - 1] > value) {
		array[position] = array[position - 1];
		position--;
	}
	array[position] = value;

	for (int i = 0; i <= n; i++) {
		printf("%d%s", array[i], i == n ? "\n" : " ");
	}

	return 0;
}
