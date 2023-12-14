#include "monty.h"
/**
 * main - entry point
 * @argc: argument coint
 * @argv: array of arguments
 * Return: 0 at success
 */
int main(int argc, char *argv[])
{
	FILE *fb = NULL;/*file pointer to access files*/
	char str[10];
	char *token;

	if (argc != 2) /* to satisfy one argumanet condition*/
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fb = fopen(argv[1], "r");/* openning file passed to monty*/
	if (fb == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (!feof(fb))/* to make fgets complete the file*/
	{
		fgets(str, 10, fb);
		printf("%s", str);/* to show what fgets*/
		token = strtok(str, " ");
		while (token != NULL)/*to make strtok complete the line
		{
			printf("this token :%s\n", token);/*to show what saved in token*/
			token = strtok(NULL, " ");
		}
       
	}
	fclose(fb);
	return (0);
}
