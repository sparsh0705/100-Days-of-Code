#include <math.h>
#include <stdio.h>

int main(void)
{
    double a, b, c;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a == 0.0) {
        printf("Not a quadratic equation: coefficient a must be nonzero.\n");
        return 1;
    }

    double discriminant = b * b - 4.0 * a * c;
    if (discriminant > 0.0) {
        double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        printf("Two distinct real roots: %.6g and %.6g\n", root1, root2);
    } else if (discriminant == 0.0) {
        printf("One repeated real root: %.6g\n", -b / (2.0 * a));
    } else {
        double real = -b / (2.0 * a);
        double imaginary = sqrt(-discriminant) / (2.0 * a);
        printf("Two complex conjugate roots: %.6g + %.6gi and %.6g - %.6gi\n",
               real, fabs(imaginary), real, fabs(imaginary));
    }

    return 0;
}