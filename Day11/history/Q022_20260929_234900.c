 #include <stdio.h>

int main(void)
{
	double costPrice, sellingPrice, percentage;

	printf("Enter cost price: ");
	scanf("%lf", &costPrice);

	printf("Enter selling price: ");
	scanf("%lf", &sellingPrice);

	if (costPrice <= 0) {
		printf("Cost price must be greater than zero.\n");
		return 1;
	}

	if (sellingPrice > costPrice) {
		percentage = (sellingPrice - costPrice) / costPrice * 100;
		printf("Profit percentage: %.2f%%\n", percentage);
	} else if (sellingPrice < costPrice) {
		percentage = (costPrice - sellingPrice) / costPrice * 100;
		printf("Loss percentage: %.2f%%\n", percentage);
	} else {
		printf("No profit, no loss.\n");
	}

	return 0;
}
