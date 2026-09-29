 #include <stdio.h>

int main(void)
{
	int rows, columns;
	long long sum = 0;

	scanf("%d %d", &rows, &columns);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			int element;
			scanf("%d", &element);
			sum += element;
		}
	}

	printf("%lld\n", sum);
	return 0;
}
