#include "monty.h"
/**
 *get_opcode - select the right function
 *@token: string to get function
 *Return: the right function
 */
void get_opcode(char *token)
{
	int i = 0;
instruction_t instruction_s[] = {
		{"push", _push},
		{"pall", pall},
		{NULL, NULL}
};
while (instruction_s[i].f != NULL)
{
	if (strcmp(token, instruction_s[i].opcode) == 0)
		return (instruction_s[i].f);
	i++
}
else
return (NULL);
}

