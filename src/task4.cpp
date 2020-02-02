#include <string.h>

char* process(char* line)
{
	int i = 0;
	int j = strlen(line) - 1;
	int drag = -1;

	while (i < j) 
	{
		if (line[i] >= '0' && line[i] <= '9') 
		{
			drag = line[i];
		}
		else i++;

		if (line[j] >= '0' && line[j] <= '9')
		{
			j--;
		}
		else if (drag != -1)
		{
			line[i] = line[j];
			line[j] = drag;
			drag = -1;
			i++;
			j--;
		}

	}
	return line;
} 