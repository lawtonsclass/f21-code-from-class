#include "counter.h"

int count;

void init_counter() {
  count = 0;
}

void inc() {
  count++;
}

void dec() {
  count--;
}

void reset(int newCount) {
  count = newCount;
}

int get_count() {
  return count;
}
