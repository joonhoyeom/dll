#include <stdio.h>

void ctest1(int *);
void ctest2(int *);

int main( const int argc, const char** argv) {

  printf("main program\n");
  int x = 987654321;

  printf("original x :%d\n", x);
  ctest1(&x);
  printf("ctest1 x :%d\n", x);
  ctest2(&x);
  printf("ctest2 x :%d\n", x);

}
