#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
 * main - prints the opcodes
 * @argc: the length of argument
 * @argv: the array of arguments
 *
 * Return: the opcodes
 */
int main(int argc, char *argv[])
{
	ud_t ud_obj;
	int j = 0; i = 0;

	if (argc == 2)
	{
		j = atoi(argv[1]);

		if (j < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], j);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);

		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}

	return (0);
}
