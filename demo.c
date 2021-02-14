#include <stdio.h>
#include <errno.h> // for 'errno'
#include <string.h> // for strerror()

int main()
{
	FILE *fp = _wfopen(L"temp.bin", L"wb+x");
	if (!fp)
	{
		printf("Error opening file: %s.\n", strerror(errno));
		return 1;
	}

	printf("File opened successfully.\n");
	fclose(fp);

	return 0;
}
