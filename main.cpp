#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    //Random Generator
    srand(time(NULL));

    //Range of the possible size for each Document
    int memoryRange;

    //Alphabet Storage
    char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O','P', 'Q', 'R', 'S', 'T', 'U','V', 'W', 'X',
        'Y', 'Z'
    };

    //Dictionary - Used to Locate Words
    char dictionary[15][20] = {"FIRST", "CPP", "REVIEW", "PROGRAM",
    "ASSIGNMENT", "CECS", "BEACH", "ECS", "FALL", "SPRING", "OS",
    "MAC", "LINUX", "WINDOWS", "LAB"};

    //Recent_List
    int recent_listSize = 127;
    char **recent_list;
    recent_list = new char*[recent_listSize];
    for(int i = 0 ; i < recent_listSize; i++){
        //Randomly Generate Size of Document (2MB - 3MB)
        memoryRange = rand() % 3000000 + 2000000;
        //Creates a Char Array of memoryRange Size
        recent_list[i] = new char[memoryRange];

        string document = "";
        //Populate the Current Char Array with Random Letters
        for(int j = 0 ; j < memoryRange; j++){
            //Randomly Generate Index (0 - 25)
            int randIndex = rand() % 26;

            //Store Random Alphabets (A - Z) into each index of the current document
//            recent_list[i][j] = alphabet[randIndex];
            document += alphabet[randIndex];
        }
        strcpy(recent_list[i], document.c_str());
    }

    //Library
    int library_size = 1027;
    char **library;
    library = new char*[library_size];
    for(int i = 0 ; i < library_size; i++){
        //Randomly Generate Size of Document (2MB - 3MB)
        memoryRange = rand() % 3000000 + 2000000;
        //Creates a Char Array of memoryRange Size
        library[i] = new char[memoryRange];

        string document = "";

        //Populate the Current Char Array with Random Letters
        for(int j = 0 ; j < memoryRange; j++){
            //Randomly Generate Index (0 - 25)
            int randIndex = rand() % 26;

            //Store Random Alphabets (A - Z) into each index of the current document
//            library[i][j] = alphabet[randIndex];
            document += alphabet[randIndex];
        }
        strcpy(library[i], document.c_str());
    }

//    int countDocument = 0;
//    char *ptr = NULL;
//    int randIndex = rand() % 15;
//    char *word = new char[100];
//    word = dictionary[randIndex];
//
//    for(int i = 0; i < recent_listSize; i++){
//        ptr = strstr(recent_list[i], word);
//        if(ptr){
//            countDocument++;
//        }
//    }
//    cout << "Count Document: " << countDocument << endl;


    //Deleting recent_list documents
    for(int i = 0 ; i < recent_listSize; i++){
        delete [] recent_list[i];
    }
    delete[] recent_list;

    //Deleting library documents
    for(int i = 0; i < library_size; i++){
        delete [] library[i];
    }
    delete [] library;

    return 0;
}
