#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isGwapa(string a) {
	if (a == "Gwapa") {
		return true;
    } else {
		return false;
	}
}

int main() {
	string str;
	printf("Gwapa si Jirah? ");
	scanf("%s", &str);
	bool isGwaps = isGwapa(str);
	printf("%d", isGwaps);
	return 0;
}

