#include <stdio.h>

int main() {
    char vowel[10];
    printf("Enter a vowel: ");
    scanf("%[aeiouAEIOU]", &vowel);
    printf("You entered the vowel: %c\n", vowel);
    return 0;
}
