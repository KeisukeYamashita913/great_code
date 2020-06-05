char mojiretsu[1000];
#endif
int main() {
for(int mojisuu = 0 ; mojisuu < 1000; mojisuu ++){
    if(mojisuu % 3 == 0){
      printf("Fizz");
    }else if(mojisuu % 5 == 0){
      printf("Buzz");
    }else if(mojisuu % 3 == 0 && mojisuu % 5 == 0){
      printf("FizzBuzz");
    }else{
      printf(mojisuu);
    }
  }
  return 0;
}
