#include<stdio.h>
int main() {
	int x, y, z, m, n;
	x = 1;
	printf("Enter number : ");
	scanf_s("%d", &n);
	m = 1;
	x = n;
	while (x >= 1) {
		y = x;
		while (y >= 1) {
			printf(" ");
			y = y - 1;
		}
		z = 1;
		while (z <= m) {
			printf("*");
			z = z + 1;
		}
		y = x;
		while (y >= 1) {
			printf(" ");
			y = y - 1;
		}
		printf("\n");
		x = x - 1;
		m = m + 2;
	}
}