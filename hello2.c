#include<string.h>

int main()
{
	char* str = "hello world2\n";
	write(1, str,strlen(str));
	return 0;
}
