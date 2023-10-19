#include <stdio.h>

int main() {
    // Text to be made invisible
    char sentence[] = "This is a secret sentence.";

    // Print spaces to hide the sentence
    for (int i = 0; i < sizeof(sentence); i++) {
        printf(" ");
    }
    printf("\n");

    return 0;
}
