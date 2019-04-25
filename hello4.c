#include<stdio.h>

int main()
{
	char* str = "hello world4\n";

	FILE* fp = fopen("./hello4.txt","w");
	fputs(str,fp);
	fclose(fp);

	return 0;

}
