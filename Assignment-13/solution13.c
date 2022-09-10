#include <stdio.h>
int main()
{
    int i,j;
    int games,players,totalScore,player,highestTotalScore;
    float highestAverage;
    
    totalScore = 0;
    games = 4;
    players = 5;
    
    int data[games][players];
    
    for(i = 0; i < games; i++){ //For each game
        printf("\nGame #%d\n",i+1);
        for(j = 0;j < players; j++){// Scores of each player
            printf("Enter scoring total for Player #%d: ",j+1);
            scanf("%d",&data[i][j]);
        }
    }

    //for each player loop through all games
    for(j = 0;j < players; j++){
        for(i = 0;i < games; i++){ 
            totalScore += data[i][j];
        }

        //Player with highest total will have highest average
        if(totalScore > highestTotalScore){
            player = j + 1;
            highestTotalScore = totalScore;
        }
        totalScore = 0;
    }

    highestAverage = (float)(highestTotalScore / games);
    printf("\nPlayer %d has highest average of %.2f",player,highestAverage);

    return 0;
}
