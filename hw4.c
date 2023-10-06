#include <stdio.h>

int main(void)
{				//goto 미사용 버전
	int num;
	int test;
	printf("Please enter a number: ");
	scanf("%d", &num);

	for (test = 2; test < num; test++)
	{
		switch (num % test)
		{
		case 0:
			printf("It isn't a prime number. \n");
			return 0;
		default:
			break;
		}
	}
	printf("It is a prime number. \n");
	return 0;
}
/*{				//goto 사용 버전
	int num;
	int test;
	printf("Please enter a number: ");
	scanf("%d", &num);

	for (test = 2; test < num; test++)
	{
		if (num % test == 0)
			goto NOTPR;
	}
	goto PR;

PR:
	printf("It is a prime number. \n");
	return 0;
NOTPR:
	printf("It isn't a prime number. \n");
	return 0;
}*/