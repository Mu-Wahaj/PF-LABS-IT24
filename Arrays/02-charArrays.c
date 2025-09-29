#include <stdio.h>

void mostFrequentChar() {
    char str[100];          //fixed-size char array
    int freq[256] = {0};    //frequency array initialized all elements to zero
    int i = 0;
    char ch;

    printf("Enter a string (press enter to end): ");

    //reading characters one by one until newline and no other type of input
    while (scanf("%c", &ch) == 1 && ch != '\n' && i < 99) {
        str[i++] = ch;
    }

    str[i] = '\0';  //null terminating the string/char arry

    //counting frequency
    for (int j = 0; j < i; j++) {
        freq[str[j]]++;
    }

    //finding most frequent char
    int maxFreq = 0;
    char mostFreqChar;
    for (int j = 0; j < 256; j++) {
        if (freq[j] > maxFreq) {
            maxFreq = freq[j];
            mostFreqChar = j;
        }
    }

    if (maxFreq > 0)
        printf("Most frequent character: '%c' occurred %d times", mostFreqChar, maxFreq);
    else
        printf("No input provided");
}

void shiftCharacters() {
    char str[100];      
    int i = 0;
    char ch;

    printf("Enter a string (press enter to end): ");

    //reading characters one by one until newline and no other type of input
    while (scanf("%c", &ch) == 1 && ch != '\n' && i < 99) {
        str[i++] = ch;
    }

    str[i] = '\0';  //null terminating the string/char arry
    i = 0;
    while (str[i] != '\0') {
        //for lowercase letters a to z
        if (str[i] >= 'a' && str[i] <= 'z') {
            // If it's z wrap around to a
            str[i] = (str[i] == 'z') ? 'a' : str[i] + 1;
        }
        //for uppercase letters A to Z
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            //if it's Z wrap around to A
            str[i] = (str[i] == 'Z') ? 'A' : str[i] + 1;
        }
        i++;
    }

    printf("Shifted string: %s", str);
}


int main(){
    mostFrequentChar();
    shiftCharacters();
}
