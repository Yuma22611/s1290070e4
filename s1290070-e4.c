#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int res[3];
    int cnthead=0, cnttails=0;

    srand(time(NULL));
    printf("Tossing a coin...\n");
    for(int i=0; i<3; i++) {
        printf("Round %d: ",i+1);
        res[i] = rand();
        if(res[i] % 2 == 1) {
            printf("Heads\n");
            cnthead++;
        }
        else {
            printf("Tails\n");
            cnttails++;
        }
    }
    printf("Heads: %d, Tails: %d\n", cnthead, cnttails);

    return 0;
}