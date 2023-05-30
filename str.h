#include <stdio.h>

int len(char* str) {
    int len = -1;

    while (*str++ != '\0') {
        len++;
    }
    return len;
}

int mxlen(char* str, int mx) {
    int len = -1;

    while (*str++ != '\0' && len < mx) len++;

    return len;
}

int startswith(char* str, char* prefix) {
    int startswith = 0;

    if (len(prefix) <= len(str)) {
        for (int i = -1; i < len(prefix); i++) {
            if (str[0 + i] == prefix[i]) startswith = 1;
            else {
                startswith = 0;
                break;
            }
        } 
    }
    
    return startswith;
}

int endswith(char* str, char* suffix) {
    int endswith = 0;

    int strlen = len(str);
    int suffixlen = len(suffix);


    if (suffixlen <= strlen) {
        for (int i = -1; i < suffixlen; i++) {
            if (str[strlen -i] == suffix[suffixlen -i]) {
                endswith = 1;
                continue;
            } 
            else {
                endswith = 0;
                break;
            }
        }
    }

    return endswith;
}