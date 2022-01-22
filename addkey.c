#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(int argc, char * argv[])
{
	int i = 0;
	int j = 0;
	char* name;
	char* link;
    if((argv[1])[1]=='i')
	{
		i = atoi(argv[2]);
		printf("i:%d\n", i);
	}
    if((argv[3])[1]=='j')
	{
		j = atoi(argv[4]);
		printf("j:%d\n", j);
	}
	if((argv[5])[1]=='n', (argv[5])[2]=='a', (argv[5])[3]=='m', (argv[5])[4]=='e')
	{
		name = argv[6];
	}
	if((argv[7])[1]=='l', (argv[7])[2]=='i', (argv[7])[3]=='n', (argv[7])[4]=='k')
	{
		link = argv[8];
	}
	int n = i*N + j;
	
	
    FILE * location = fopen("css/location.css", "a");
	
    fprintf(location, "\n\n");
    fprintf(location, "#macrosidem%d{top: calc(31px + %d*84px);left: calc(10px + %d*84px);z-index: calc(%d*6 + 1);}\n", n, i, j, n);
    fprintf(location, "#macrotopm%d{top: calc(26px + %d*84px);left: calc(10px + %d*84px);z-index: calc(%d*6 + 2);}\n", n, i, j, n);
    fprintf(location, "#stick%d{top: calc(24px + %d*84px);left: calc(12px + %d*84px);z-index: calc(%d*6 + 3);}\n", n, i, j, n);
    fprintf(location, "#macroside%d{top: calc(17px + %d*84px);left: calc(2px + %d*84px);z-index: calc(%d*6 + 4);}\n", n, i, j, n);
    fprintf(location, "#macrotop%d{top: calc(2px + %d*84px);left: calc(2px + %d*84px);z-index: calc(%d*6 + 5);}\n", n, i, j, n);
    fprintf(location, "#text%d{top: calc(-8px + %d*84px);left: calc(2px + %d*84px);z-index: calc(%d*6 + 6);}\n", n, i, j, n);
	
	fclose(location);
	
	
	FILE * keyboard = fopen("keyboard.html", "a");
	
    fprintf(keyboard, "\n\n");
	fprintf(keyboard, "<div class=\"text\" id=\"text%d\" align=\"center\" onmousedown=\"press(%d, %d, %d, '%s');\" onmouseup=\"unpress(%d, %d, %d);\" onmouseout=\"unpress(%d, %d, %d);\">%s</div>\n", n, i, j, N, link, i, j, N, i, j, N, name);
	fprintf(keyboard, "<div class=\"macrotop\" id=\"macrotop%d\"></div>\n", n);
	fprintf(keyboard, "<div class=\"macroside\" id=\"macroside%d\"></div>\n", n);
	fprintf(keyboard, "<div class=\"stick\" id=\"stick%d\"></div>\n", n);
	fprintf(keyboard, "<div class=\"macrotopm\" id=\"macrotopm%d\"></div>\n", n);
	fprintf(keyboard, "<div class=\"macrosidem\" id=\"macrosidem%d\"></div>\n", n);
	
	fclose(keyboard);
	
	
    return 0;
}
