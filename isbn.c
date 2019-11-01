#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{
  int isbin;
  int sum = 0;
  int dig[10];

  printf("\n\n\n%s\n","Enter a 10 digit ISBN");
  scanf("%d", &isbin);
  if(isbin>999999999 && isbin<10000000000){

    for(int i = 9; i >= 0; i--){
      dig[i] = getLast(isbin);
      if(i!=9){
        sum = sum + dig[i] * (i+1);
      }
      isbin = isbin / 10;
    }

    sum = sum % 11;
    printf("\n\nThe last digit should be %i", sum);
    printf("\nThe last digit is %i", dig[9]);
    if (sum == dig[9]){
      printf("\nThese match.");
    } else {
      printf("\nThese do not match.");
    }

    printf("\n\nBye!");
    sleep(2);
    return 0;
  } else {
    printf("\n\n Bad input.");
    printf("\n\nBye!");
    sleep(2);
  }

}

int getLast(int x){
  return x%10;
}
/* int getLastDigit(long long ISBN);

int main(void)
{
    int dig[10];
    int sum = 0;
    long long ISBN = get_long("\nISBN: ");
    for(int i = 9; i >= 0; i--){     <-------------------------------------------  I think you need to change ">=" to "<="
        dig[i] = getLastDigit(ISBN);
        printf("%i", dig[i]);
        if (i != 9)
        {
            sum += (dig[i] * (i+1));
            printf("\n dig is now %i\n", dig[i]);
            printf("\n mult is now %i\n", dig[i] * (i+1));
            printf("\n sum is now %i\n", sum);
        }
        ISBN = ISBN/10;
    }

    if(sum%11 == dig[9]){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
}

 int getLastDigit(long long ISBN){
    return ISBN%10;
    printf("4O");
} */
