#include <stdio.h>

typedef struct {
  float x;
  float y;
} point;

int add_together(int x, int y) {
  int result = x + y;
  return result;
}

int hello_n_times(int n) {
  for (int i = 0; i < n; i++) {
    puts("Hello World!");
  }
  return 0;
}

int main() {
  int count;
  count = 10;

  point p;
  p.x = 0.1;
  p.y = 10.0;

  int x = 50;
  if (x > 10 && x < 100) {
    puts("x is greater than 10 and less than 100!");
  } else {
    puts("x is less than 11 or greater than 98!");
  }

  int i = 10;
  while (i > 0) {
    puts("Loop Iteration");
    i--;
  }

  for (int i = 0; i < 10; i++) {
    puts("Loop Iteration");
  }

  hello_n_times(5);

  return 0;
}
