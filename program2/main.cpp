#include <cstdio>

void fizz_buzz(int value){

  if(value == 0) {
    printf("%d", value);
  }
  else if(value % 3 == 0 && value % 5 == 0) {
    printf("fizzbuzz");
  }
  else if(value % 3 == 0) {
    printf("fizz");
  }
  else if(value % 3 == 0) {
    printf("buzz");
  }
  else {
    printf("%d", value);
  }
}

int step_function(int x){

  int result = 0;

  if(x < 0) {

    result = -1;

  } else if (x > 0) {
    result = 1;
  }

  return result;
}

int main (){
  
  for(int x = -10; x < 21; x++){
    printf("Step: %d:%d\n", x, step_function(x));
    printf("Step: %d:", x);
    fizz_buzz(x);
    printf("\n");
  }

  return 0;
}

