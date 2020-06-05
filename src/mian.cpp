#include <stdio.h>

int main() {
    
int mojisuu;
    
for(mojisuu = 1 ; mojisuu < 1000; mojisuu ++){
    if(mojisuu % 3 == 0){
      printf("Fizz\n");
    }else if(mojisuu % 5 == 0){
      printf("Buzz\n");
    }else if(mojisuu % 3 == 0 && mojisuu % 5 == 0){
      printf("FizzBuzz\n");
    }else{
      printf("%d\n",mojisuu);
    }
  }
  return 0;
 }

