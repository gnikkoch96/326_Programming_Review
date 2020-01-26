#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void insertData(char *par, int size);

int main()
{
    //Random Generator used for Generating the Memory for each line (which is 2mb - 3mb)
    srand(time(NULL));
    int memoryRange;

    //Dictionary
    //15 words, 40 length
    char dictionary[15][40] = {"FIRST", "CPP", "REVIEW", "PROGRAM",
        "ASSIGNMENT", "CECS", "BEACH", "ECS", "FALL", "SPRING", "OS",
        "MAC", "LINUX", "WINDOWS", "LAB"};

    //Recent_List
    int recentListSize = 127;
    char **recent_list;
    recent_list = new char*[recentListSize];
    for(int i = 0; i < recentListSize; i++){
        //Randomly Generates #'s between 2 mill to 3 mill
        memoryRange = rand() % 3000000 + 2000000;
        recent_list[i] = new char[memoryRange];

        //Inserts Data into the list
        insertData(recent_list[i], memoryRange);
    }

    //Library
    int librarySize = 1024;
    char **library;
    library = new char*[librarySize];
    for(int i = 0; i < recentListSize; i++){
        memoryRange = rand() % 3000000 + 2000000;
        library[i] = new char[memoryRange];

        //Inserts Data into the library
        insertData(library[i], memoryRange);
    }

    return 0;
}

void insertData(char *par, int size){
    for(int i = 0; i < size; i++){

    }
}
