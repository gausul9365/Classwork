#include <stdio.h>
#include <stdbool.h>

int findStringLength(const char str[]) {
    int length = 0;

    
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int countWords(const char str[]) {
    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        } else {
            
            inWord = true;
        }
    }

   
    if (inWord) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    char filePath[300];
    char myString[5000];
    FILE *file;

    
    printf("Please enter the full file path: ");
    scanf("%s", filePath); 

    
    file = fopen(filePath, "r");
    if (file == NULL) {
        printf("Error: Could not open the file at '%s'. Please check the path and try again.\n", filePath);
        return 1;
    }

   
    if (fgets(myString, sizeof(myString), file) != NULL) {
        
        int length = findStringLength(myString);
        if (myString[length - 1] == '\n') {
            myString[length - 1] = '\0';
            length--; 
        }

       
        int wordCount = countWords(myString);

        printf("\nFile content: \"%s\"\n", myString);
        printf("The length of the string is: %d\n", length);
        printf("The number of words is: %d\n", wordCount);
    } else {
        printf("Error: Could not read the file or it is empty.\n");
    }

    
    fclose(file);
    return 0;
}
