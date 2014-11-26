#include <stdio.h>

int reverse(int x);

int main()
{
	int ret = 0;
	printf("begin...\n");
	ret = reverse(-2147483648);
	printf("%d\n", ret);
	return 0;
}

int reverse(int input) {
	int last_digit = 0;
	int ret = 0;
	int ret1 = 0;

	printf("%d\n", input);

	while (input != 0)
	{    
		last_digit = input % 10;
		ret1 = ret * 10 + last_digit;
		if( (int)(ret1/10) != ret )
		{	
			ret = 0;
			break;
		}
		ret = ret1;

		input = input / 10; 
	}

	return ret;
}


