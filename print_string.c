#include "main.h"

/* pseudocode below this point */

if conversion specifier equals %s

/* This prototype needs fixed but I'm trying to use strncpy - NV */

char print_string(char *dest, char *src, int n){
	
	int i;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
	}
	return (dest);
}

