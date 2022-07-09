#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int res[3];
    int cnthead=0, cnttails=0;
    char name[15];

    printf("Who are you?\n> ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

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

    if(cnthead > cnttails) printf("%s won!\n",name);
    else printf("%s lost.\n",name);

    return 0;
}