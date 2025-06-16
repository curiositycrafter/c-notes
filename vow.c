#include <stdio.h>

int main() {
    char vowel;
    printf("Enter a vowel: ");
    scanf("%[aeiouAEIOU]", &vowel);
    printf("You entered the vowel: %c\n", vowel);
    return 0;
}
