#include <stdio.h>

int changer(int ch) {
	const int n = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z') {
		return ch + n;
	}
	else if (ch >= 'a' && ch <= 'z') {
		return ch - n;
	}
	else {
		return ch;
	}
}

int main(void)
{
	char ch[500];
	int i;
	
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);

	for (i = 0; i < sizeof(ch); i++) {
		if (ch[i] == '\0') {
			break;
		}
		ch[i] = changer(ch[i]);
	}
	printf("Output> ");
	puts(ch);
	return 0;
}