#include <string>
#include "gotoxy-m.h"
const char* formatCurrencyValue(unsigned long int);

int main() {
	int x, y;

	printf("123456789\n");
	printf("123456789\n");
	printf("123456789\n");
	printf("123456789\n");
	printf("123456789\n");

	scanf("%d %d", &x, &y);
	gotoxy(x, y);
	printf("H");

	return 0;
}

const char* formatCurrencyValue(unsigned long int in) {
	std::string inS = std::to_string(in);
	int l = static_cast<int>(inS.length());

	unsigned long int r = l / 3;
	if (r != 0) {
		if (l % 3 == 0) r--;
		for (unsigned long int i = 1; i <= r; i++) {
			inS.insert(l - 3 * i, ".");
		}
	}
	char* value = new char[inS.length() + 1];
	strcpy(value, inS.c_str());
	return (value);
}