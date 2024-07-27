#include <cstdio>

void fizz_buzz(int answer){

  if(answer == 1) {
    printf("fizz");
  }
  else {
    printf("buzz\n");
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
    printf("%d:%d\n", x, step_function(x));
  }

  int answer = 10;
  fizz_buzz(answer);
  return 0;
}

