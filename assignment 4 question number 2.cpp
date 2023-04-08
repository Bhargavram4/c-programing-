#include <stdio.h>
#include <stdlib.h>
struct Player {
    char name[50];
    int runs;
};

int main() {
    int n, i, total_runs = 0;
    printf("Enter the number of players in the team: ");
    scanf("%d", &n);
    struct Player team[n];
    for (i = 0; i < n; i++) {
        printf("Enter the name of player %d: ", i+1);
        scanf("%s", team[i].name);
        printf("Enter the runs scored by player %d: ", i+1);
        scanf("%d", &team[i].runs);
        total_runs += team[i].runs;
    }
    printf("\nTotal runs scored by the team: %d\n", total_runs);

    return 0;
}
