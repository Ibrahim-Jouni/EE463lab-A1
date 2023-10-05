#include <stdio.h>

int main (int argc, char *argv[]) { 
if (argc != 2) { 
	printf("Usage: ./seconds_converter <hours>\n");
        return 1;
}

int hours = atoi(argv[1]);
int seconds = hours * 3600;

printf("%d hours is equal to %d seconds.\n", hours, seconds);

return 0;


}
