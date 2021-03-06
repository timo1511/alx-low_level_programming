#ifndef _CALC_H_
#define _CALC_H_

#include <stdlib.h>
#include <stdio.h>
/**
 * struct op - struct op
 *
 * @op: The operator
 * @f: The associated function
*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}opt_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
