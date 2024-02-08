#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#define NULL ((void *)0)
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int Get_Power(unsigned int Index);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
#define Get_Bit(Register, Index) (((Register >> Index) & 1))
int set_bit(unsigned long int *n, unsigned int index);
#define Set_Bit(Register, Index) (Register |= (1 << Index))
#define Clr_Bit(Regsiter, Index) (Regsiter &= ~(1 << Index))
int clear_bit(unsigned long int *n, unsigned int index);
#define Toggle_Bit(Reg, Index) (Reg ^= (1 << Index))
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
