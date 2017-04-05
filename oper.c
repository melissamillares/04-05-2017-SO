/*
 ============================================================================
 Name        : c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void suma(int * a, int b) {
	*a = *a + b;
}

void resta(int * a, int b) {
	*a = *a - b;
}

void sumav(int * a, int * b, int n) {
	for (int i = 0; i <= n; i++) {
		a[i] = a[i] + b[i];
	}
}

void restav(int * a, int * b, int n) {
	for (int i = 0; i <= n; i++) {
		a[i] = a[i] + b[i];
	}
}

void multescalar(int *a, int *b, int *c, int n) {
	for (int i = 0; i <= n; i++) {
		*a += b[i] * c[i];
	}
}
