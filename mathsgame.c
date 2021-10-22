#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed gen


    printf("Maths Game\n");

    printf("\n1 = Addition\n2 = Multiplication\nMode: ");
    int mode;
    scanf("%d", &mode); // Addition vs Multiplication

    printf("\n1 = Easy\n2 = Harder\n3 = Hardest\nDifficulty: ");
    int dif;
    scanf("%d", &dif); //Difficulty Level

    printf("\nRounds: ");
    int rounds;
    scanf("%d", &rounds); //Number of questions

    int r = 1; // Total runs
    int s = 0; // Score
    do {

        int numO = (dif*(rand() % 10));
        int numT = (dif*(rand() % 10));
        int a; // Answer
        printf("%d.\n", r);
        switch (mode) { // Check mode
            case 1:
                printf("%d + %d = ", numO, numT);
                a = numO + numT;
                break;
            case 2:
                printf("%d x %d = ", numO, numT);
                a = numO * numT;
                break;
        }

        int userInput; // Check user answer
        scanf("%d", &userInput);
        if (userInput == a) {
            printf("Epic\n\n");
            s++;
        } else { printf("That ain't it boss\n\n");}

        r++;

    } while (r != rounds + 1);

    printf("%d/%d", s, rounds); // Score

    return 0;
}
