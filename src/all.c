#include<stdio.h>

void basic_op() {
  int a = 10;
  int b = 20;
  int c = a + b;
  printf(" Hey world ! this is %d + %d = %d \n", a, b, c);
  printf(" And, %p, %p, %p are their addresses \n", & a, & b, & c);
}

void pointers() {
  int * p;
  int a = 40;
  p = & a;
  printf("%d, %p, %d \n", a, p, * p);
}

void twoDArrays() {
  int ROWSIZE = 3;
  int COLSIZE = 3;
  int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  for (int i = 0; i < ROWSIZE; i++) {
    for (int j = 0; j < COLSIZE; j++) {
        printf("| %d ", array[j][i]);
    }
    printf("|\n");
  }
}


void structs() {
  struct Car {
      int number;
      float hp; // cc
      char name[];
  };
    struct Car Limmo, Range;
    Limmo = {"Limmo Zeen", 1234, 3000};
    Range = {"Range Rover", 3636, 3500};

  printf("Limmo - %s, %d, %f", Limmo.name, Limmo.number, Limmo.hp);
  printf("Range - %s, %d, %f", Range.name, Range.number, Range.hp);

}

int main() {
    // basic_op();
    // pointers();
    twoDArrays();
  return 0;
}