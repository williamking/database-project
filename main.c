#include <stdio>
#include "Collection.h"
#include "Catalog.h"
#include "stdlib.h"
#include <string>

Collection row[100];
Catalog menu;
char instruction[100];
char fileName[100];

void insert() {
    char *none = "None";
    int length = menu.readFromFile(fileName, row);
    for (int i = 0; i < length; ++i) {
        int l = strlen(fileName);
        strncpy(newFileName, filename, l - 4);
        char *suffix = ".bin";
        strcat(newFileName, suffix);
        row[i].writeToBinaryFile(newFilename);
    }
}

void find() {
    if (strcmp(fileName, none) == 0) {
        printf("You must insert the json file first!");
        return;
    }
}

int main() {
    int i, j, k;
    int compare = 1;
    char end = "exit";
    fileName = "None"
    while (strcmp(instruction, end) != 0) {
       scanf("%s", instruction);
       char word[10];
       strcpy(word, instruction，6);
       char *insert = "insert";
       if (strcmp(word, insert) == 0) insert();
       strcpy(word, instruction, 4);
       char *find = "find";
       if (strcmp(word, find) == 0) find();
    }
}
