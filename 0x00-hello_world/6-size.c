/*
* File: 6-size.c
* Design by: Abdul Jabbar Abubakar
*/
#include <stdio.h>


/**
 * main - Prints " prints the size of various types on 
 * the computer it is compiled and run on.
 *
 * Return: Always 0.
 */
int main(void)
{

	printf("Size of char: %zu byte(s)\n", sizeof(char));

	printf("Size of int: %zu  byte(s)\n", sizeof(int));

	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));

	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);



}
