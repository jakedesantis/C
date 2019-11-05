#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
  long long int cc;
  printf("\n\n\n%s\n","Enter the Credit Card #");
  scanf("%lld", &cc);
  if(cc>300000000000000 && cc<400000000000000) {
      checkAmEx(cc);
    } else if(cc>4000000000000000 && cc<5000000000000000) {
      checkVisa(cc);
    } else if(cc>5000000000000000 && cc<6000000000000000) {
      checkMC(cc);
    } else {
      notCC(cc);
    }

}

int checkVisa(long long int x){
  printf("\nChecking a Visa with number %lld", x);
  checkCC(x);
  return 1;
  }

int checkMC(long long int x){
  printf("\nChecking an MC with number %lld", x);
  checkCC(x);
  return 1;
  }

int checkAmEx(long long int x){
  printf("\nChecking an AmEx with number %lld", x);
  checkCC(x);
  return 1;
}

int notCC(long long int x){
  printf("\nThe digit count for %lld is not right.", x);
  printf("\n\nBye!");
  sleep(2);
  return 1;
  }

int checkCC(long long int x){
  int sum = 0;
  int mult = 1;
  while(x>0){
    if(mult*(x%10)<10){
      sum = sum + mult * (x%10);
    } else {
      sum = sum + 1 + (mult * (x%10)-10);
    }
    x = x / 10;
    if (mult == 1){
      mult = 2;
    } else {
      mult = 1;
    }
  }
  printf("\n%d is the sum", sum);
  if(sum%10 == 0){
    printf("\n\nCard is valid.");
  } else {
    printf("\n\nCard is NOT valid.");
  }
  printf("\n\nBye!");
  sleep(2);
  return 1;
}
