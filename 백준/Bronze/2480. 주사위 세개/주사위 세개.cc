#include <stdio.h>

int main() {
    int dice1, dice2, dice3; 
    int prize = 0;
    scanf("%d %d %d", &dice1, &dice2, &dice3);


    if (dice1 == dice2 && dice2 == dice3) {
        prize = 10000 + (dice1 * 1000);
    }
 
    else if (dice1 == dice2 || dice1 == dice3 || dice2 == dice3) {

        int same_eye;
        if (dice1 == dice2) {
            same_eye = dice1;
        } else if (dice1 == dice3) {
            same_eye = dice1;
        } else { 
            same_eye = dice2;
        }
        prize = 1000 + (same_eye * 100);
    }

    else {
        int max_eye = dice1; 

        if (dice2 > max_eye) {
            max_eye = dice2;
        }
        if (dice3 > max_eye) {
            max_eye = dice3;
        }
        prize = max_eye * 100;
    }

    printf("%d", prize);

    return 0;
}