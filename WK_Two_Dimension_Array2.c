#include <stdio.h>

int main (void){
    const int size = 3;
    const int fivechess = 5;
    int board [size][size];
    int i, j;
    int numOfX;
    int numOf0;
    int result = -1; //-1:没人赢，1：X赢，0：o赢

    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &board[i][j]);
        }
    }
    //检查行
    for(i=0; i<size && result == -1; i++){
        numOf0 = numOfX = 0;
        for(j=0; j<size; j++){
            if(board[i][j]==1){
                numOfX ++;
            }else if(board[i][j]==0){
                numOf0 ++;
            }
        }
        if(numOfX == size){
            result = 1;
        }else if(numOf0 == size){
            result = 0;
        }      
    }
    for(j=0; j<size && result == -1; j++){
        numOf0 = numOfX = 0;
        for(i=0; i<size; i++){
            if(board[i][j]==1){
                numOfX ++;
            }else if(board[i][j]==0){
                numOf0 ++;
            }
        }
        if(numOfX == size){
            result = 1;
        }else if(numOf0 == size){
            result = 0;
        }      
    }
    numOfX = numOf0 = 0;
    for(i=0; i<size; i++){
        if(board[i][i]==1){
            numOfX ++;
        }else if(board[i][i]==0){
            numOf0 ++;
        }
    }
    if(numOfX == size){
        result = 1;
    }else if(numOf0 == size){
        result = 0;
    }
    numOfX = numOf0 = 0;
    for(i=0; i<size; i++){
        if(board[i][size-i-1]==1){
            numOfX ++;
        }else if(board[i][size-i-1]==0){
            numOf0 ++;
        }
    }
    if(numOfX == size){
        result = 1;
    }else if(numOf0 == size){
        result = 0;
    }
    if(result == 1){
        printf("X win\n");
    }else if(result == 0){
        printf("0 win\n");
        }else{
            printf("No one win\n");
        }
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            //a [i][j] = i*j;
            printf("%d", board[i][j]);
        } 
        printf("\n"); 
    }     

    return 0;
}