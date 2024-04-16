// Угадай цвет 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* colors[] = { "red", "green", "blue", "yellow", "white", "black", "purple", "orange", "pink", "brown" };
int get_random_color() {
    return rand() % 10;
}

void game(const char* message) {
    char guess[50];
    int attempts = 0;
    int color = get_random_color();

    printf("%s\n", message);

    while (1) {
        printf("Enter your guess (type 'exit' to quit the game): ");
        scanf("%s", guess);

        if (strcmp(guess, "exit") == 0) {
            break;
        }

        attempts++;

        if (strcmp(guess, colors[color]) == 0) {
            printf("Congratulations! You've guessed the color. It was %s!\n", colors[color]);
            break;
        } else {
            printf("Wrong guess. Try again.\n");
        }
    }

    printf("The number of attempts: %d\n", attempts);
}

int main() {
    srand(time(0));
    game("Welcome to the color guessing game! I am thinking of a color. Can you guess what it is?");

    return 0;
}
