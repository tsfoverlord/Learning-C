#include <stdio.h>
#define PLAYER_COUNT 5
struct stats{
    int points;
    int games;
};

int main(){
    struct stats player[PLAYER_COUNT];
    double playerAverage[PLAYER_COUNT];
    int i;
    //Loop through each player
    //Input points and games played
    //Calculate Average and store
    for(i = 0; i <  PLAYER_COUNT; i++){
        printf("Enter player %d's total point: ",i+1);
        scanf("%d",&(player[i].points));
        printf("Enter player %d's game count: ",i+1);
        scanf("%d",&(player[i].games));
        playerAverage[i] = (double)player[i].points / (double)player[i].games;
    }

    //Print average score for each player
    for(i = 0;i < PLAYER_COUNT; i++){
        printf("Player %d's average: %.2f\n",i+1,playerAverage[i]);
    }
    
    
  
    return 0;
}