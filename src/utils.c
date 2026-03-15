#include "utils.h"

// Search for character in the string
bool char_in_string(char c, char *str) {
    for (int i = 0; str[i] || i == 0; ++i) {
        if (str[i] == c) {
            return true;
        }
    }

    return false;
}
