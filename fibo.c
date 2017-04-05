/*
 ============================================================================
 Name        : fibo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fibo(int n) {
	if (n==1)
		return 1;
	else if (n==2)
		return 1;
	else
		return fibo(n-1) + fibo(n-2);
}
