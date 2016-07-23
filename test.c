#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str(void)
{
	int i;
	char *p_str;
	for (i = 0; i < 5; i++)
	{
		p_str[i] = 'A'+i;
	}
}

int main(void)
{
	char *str = "Zvit";
	printf("Write to screen %S! \n", str);
	return 0;
}
