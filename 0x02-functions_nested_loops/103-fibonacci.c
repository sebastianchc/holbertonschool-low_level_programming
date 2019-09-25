#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned long v, w, x, y, z;

        x = 1;
        y = 0;
	v = 0;
        for (z = 0; z <= 49; z++)
        {
		
		while (w < 4000000)
		{
			w = x + y;
			y = x;
			x = w;
		}
        }
        printf("\n");
}
