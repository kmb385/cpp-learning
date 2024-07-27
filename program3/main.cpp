#include <cstdio>

int absolute_value(int value) {

  if (value < 0) {
    value = value * -1;
  }

  return value;
}

int main() {

  for(int x = -5; x <= 5; x++) {

    printf("%d\n", absolute_value(x));

  }

}

