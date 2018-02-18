#include <string>

char* formatCurrencyValue(unsigned long int in) {
	std::string inS = std::to_string(in);
	int l = static_cast<int>(inS.length());

	unsigned long int r = l / 3;
	if (r != 0) {
		if (l % 3 == 0) r--;
		for (unsigned long int i = 1; i <= r; i++) {
			inS.insert(l - 3 * i, ".");
		}
	}
	
	return inS.c_str;
}