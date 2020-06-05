char mojiretsu[1000];

問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、１５でならFizzBuzzと発言する
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
