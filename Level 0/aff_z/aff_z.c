/*
Assignment name: aff_z
Expected files: aff_z.c
Allowed functions: write

Write a program that displays the character 'z' followed by a newline character.
*/
#include <unistd.h>

int main(void)
{
	write(1, "z""\n", 2);
	return(0);
}

