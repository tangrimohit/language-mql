#include <stdio.h>

#define PI 3.14
void main() {
        /* my first program in C */
        int radius;
        float area;
        printf("Please enter the radius of the circle:");
        scanf("%d",&radius);
        area = (radius * radius) * PI;
        printf("%f sq\n",area);
}

//
// Arithmetic *+-/   '%'    10%4 = 2  ++  --
// Relational == != > < >= <=
// Logical   && || !
// Bitwise
// Assignment lvalue=rvalue a%=b a = a%b  <<=  >>= &= |= ^=
// Miscellaneous  ?:  sizeof(float)  & *
//
// a == b  Boolean True 1 False 0
//
//  !(b==2)
// 000 >> 000
// 001 >> 001
// 010 >> 001
// 011 >> 011
//
// p	q	p & q	p | q	p ^ q  ~P
// 0	0	    0	    0	    0
// 0	1	    0	    1     1
// 1	1	    1	    1	    0
// 1	0	    0	    1	    1
//
//
// ?: expression? statement : statement;
//
//
// ()
