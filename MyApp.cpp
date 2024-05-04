#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	FILE *file;
	char text_content[20];
	
	file = fopen("Naruto.txt", "r");
	
	if(file==NULL)//if(!file)
	{
		printf("No .txt file present...\n\a");
		system("PAUSE");
		exit(1);
	}
	else
	{
		fscanf(file, "%s", text_content);
		printf("The first word of the .txt file was: '%s'.\n", text_content);
	
		fclose(file);
		system("PAUSE");
		return 0;
	}
}
