
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};
    int i;

    // If lengths are different, they cannot be anagrams
    if (strlen(s) != strlen(t)) {
        return false;
    }

    // Count characters in s and subtract characters in t
    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    // Check whether all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
