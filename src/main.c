/*
 * main.c
 *
 *  Created on: Apr 10, 2016
 *      Author: gustavo
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t fibonacci(uint32_t n) {
	if (n == 0) {
		return 0;
	} else {
		if (n == 1) {
			return 1;
		} else {
			return (fibonacci(n - 1) + fibonacci(n - 2));
		}
	}
}

int main(void) {
	uint32_t terms = 10;
	uint32_t i = 0;

	for (i = 0; i < terms; i++) {
		printf("%d\n", fibonacci(i));
	}

	return 0;
}
