#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m;

	scanf("%d", &n);
	int *a = malloc((size_t)n * sizeof(*a));
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	scanf("%d", &m);
	int *b = malloc((size_t)m * sizeof(*b));
	for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);

	for (int i = 0; i < n; i++)
		printf("%d%c", a[i], i == n + m - 1 ? '\n' : ' ');
	for (int i = 0; i < m; i++)
		printf("%d%c", b[i], i == m - 1 ? '\n' : ' ');

	free(a);
	free(b);
	return 0;
}
