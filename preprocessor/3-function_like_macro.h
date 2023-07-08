#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H
/*
 * IF x is less than zero we will reject it using the minus unary '-(x)'
 * to obtain the result, if x is greater than or equal to 0
 * we do not make any changes.
 * For the rest of the comments see 0-object_like_macro.h
 */
#define ABS(x) ((x) < (0) ? -(x) : (x))
#endif
