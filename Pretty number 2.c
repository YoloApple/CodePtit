#include <stdio.h>
#include <string.h>
int main()
{
	int test;
	scanf("%d", &test);
	while (test > 0) {
		char text[1000];
		scanf("%s", text);
		int kq = 1, sum = 0;
		for (int i = 0; i < strlen(text); i++) {
			if (i == strlen(text) - 1 && (text[i] - 48) != 8) kq = 0;
			sum += text[i] - 48;
		}
		if (sum % 10 != 0) kq = 0;
		if (kq) printf("YES\n");
		else printf("NO\n");
		test--;
	}
}