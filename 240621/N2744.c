#include <stdio.h>

int main() {
	
	char a[101];
	scanf_s("%s", a);

	for (int i = 0; a[i] != "\0"; i++) {
		if ("A" <= a[i] && a[i] <= "Z") {
			a[i] += 32;
		}
		if ("a" <= a[i] && a[i] <= "z") {
			a[i] += 32;
		}
	}

	printf("%s\n", a);

	return 0;
}