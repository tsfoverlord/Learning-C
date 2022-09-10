#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int flips,heads,tails,coin;
    srand(time(0));
    heads = 0;
    tails = 0;
    printf("Enter number of flips:");
    scanf("%d",&flips);
    for(int i = 1; i <= flips; i++){
       coin = rand() % 2;
       if(coin == 1)
          heads++;
       else
          tails++;
    }
   printf("\nHeads: %d\nTails:%d\n",heads,tails);
   return 0;
}
