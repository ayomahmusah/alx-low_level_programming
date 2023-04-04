#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size) {
  int i, total1 = 0, total2 = 0;
  for (i = 0; i < size * size; i += size + 1) {
    total1 += a[i];
    total2 += a[(i / (size - 1) + 1) * (size - 1)];
  }
  printf("Sum of diagonal 1: %d\n", total1);
  printf("Sum of diagonal 2: %d\n", total2);
}
