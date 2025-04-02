#include <stdio.h>
#include <string.h>

int main() {
    char str[45];
    int cnt = 0, l = 0, s = 45;
    char temp[45], small[45], large[45];

    printf("Enter the string:\n");
    fgets(str, 45, stdin);

    small[0] = '\0';  // Initialize small and large to avoid garbage values
    large[0] = '\0';

    for (int i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            temp[j++] = str[i]; // Store characters in temp
            cnt++;
        } else {
            if (cnt > 0) { // Ensure we don't update on consecutive spaces
                temp[j] = '\0'; // Null-terminate the temp string

                if (cnt < s) {
                    strcpy(small, temp);
                    s = cnt;
                }
                if (cnt > l) {
                    strcpy(large, temp);
                    l = cnt;
                }
            }
            cnt = 0; // Reset counter for next word
            j = 0; // Reset temp index
        }
    }

    // Process the last word if input doesn't end with a space
    if (cnt > 0) {
        temp[cnt] = '\0'; // Null-terminate the last word
        if (cnt < s) {
            strcpy(small, temp);
            s = cnt;
        }
        if (cnt > l) {
            strcpy(large, temp);
            l = cnt;
        }
    }

    printf("Smallest word: %s\n", small);
    printf("Largest word: %s\n", large);
    return 0;
}


