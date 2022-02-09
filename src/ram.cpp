#include "ram.h"

int array[8] = {0};

void write(int& i, int& number) {
   array[i] = number;
}

int read(int& i) {
   return array[i];
}