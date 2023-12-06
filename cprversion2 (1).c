// CONVERTING MODULE SOURCE
//Group Members
//Chelsey Tharayil Moni
//Mariya Thomas
//Taran Virk

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE1 80
#define BUFFER_SIZE2 300
#define NUM_INPUT_SIZE 10
#include "cprversion1.h"
#include <stdio.h>
#include <string.h>

void converting(void) {

	printf("*** Start of Converting Strings to int Demo ***\n");
	char intString[BUFFER_SIZE1]; //Creates a character array 'intString' of size 'BUFFER_SIZE' (80)
	int intNumber; //Creates a variable 'intNumber' of 'int' data type
	do {
		printf("Type an int numeric string (q - to quit): \n");
		fgets(intString, BUFFER_SIZE1, stdin); //Reads a maximum of 80(BUFFER_SIZE) characters from the standard input and stores it in 'intString' character array
		intString[strlen(intString) - 1] = '\0'; //Assigns null terminator to the 'intString' array at the index number that precedes the index number which is equal to the length of the 'intString' character array 
		if (strcmp(intString, "q") != 0) { //Compares 'intString' with "q" lexicographically and executes the conditional loop if they are not the same
			intNumber = atoi(intString); //Converts the string of numbers, "intString" to its equivalent integer value and stores the value in 'intNumber'
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0); //The 'do while' loop continues to execute until 'intString' matches with "q" lexicographically
	printf("*** End of Converting Strings to int demo ***\n\n");


    printf("*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE1]; //Creates a character array 'doubleString' of size 'BUFFER_SIZE' (80)
    double doubleNumber; //Creates a variable 'doubleNumber' of 'double' data type
    do {
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE1, stdin); //Reads a maximum of 80(BUFFER_SIZE) characters from the standard input and stores it in 'doubleString' character array
        doubleString[strlen(doubleString) - 1] = '\0'; //Assigns null terminator to the 'doubleString' array at the index number that precedes the index number which is equal to the length of the 'doubleString' character array 
        if ((strcmp(doubleString, "q") != 0)) { //Compares 'doubleString' with "q" lexicographically and executes the conditional loop if they are not the same
            doubleNumber = atof(doubleString); //Converts the string of numbers, "doubleString" to its equivalent double value and stores the value in 'doubleNumber'
            printf("Converted number is %f\n", doubleNumber);
        }
    } while (strcmp(doubleString, "q") != 0); //The 'do while' loop continues to execute until 'doubleString' matches with "q" lexicographically
    printf("*** End of Converting Strings to double Demo ***\n\n");
}

void manipulating(void)
{
    //Print header for demo
    printf("*** Start of Concatenating Strings Demo ***\n");

    //Declare variables for strings
    char string1[BUFFER_SIZE1 * 2];
    char string2[BUFFER_SIZE1];

    //Start Loop for user input
    do
    {
        //Prompt user to input 1st string
        printf("Type the 1st string (q - to quit) :\n");
        //Get input and remove new line character
        fgets(string1, BUFFER_SIZE1, stdin);
        string1[strlen(string1) - 1] = '\0';

        //Check if user wants to quit
        if ((strcmp(string1, "q") != 0))
        {
            //Prompt user to input 2nd string
            printf("Type the 2nd string:\n");
            //Get input and remove new line character
            fgets(string2, BUFFER_SIZE1, stdin);
            string2[strlen(string2) - 1] = '\0';
            //Concatenate the strings and print
            strcat(string1, string2);
            printf("Concatenated string is \'%s\'\n", string1);
        }
        //Continue loop until user enter 'q'    
    } while (strcmp(string1, "q") != 0);

    //Print footer
    printf("*** End of Concatenating Strings Demo ***\n\n");

    printf("*** Start of Comparing Strings Demo ***\n");
    char compare1[BUFFER_SIZE1];
    char compare2[BUFFER_SIZE1];
    int result;
    // Loop until user inputs 'q'
    do {
        //Prompt user for a string
        printf("Type the 1st string to compare (q - to quit):\n");
        // Read string and store in compate1
        fgets(compare1, BUFFER_SIZE1, stdin);
        // Remove newline character and replace with null terminator
        compare1[strlen(compare1) - 1] = '\0';
        // Enter loop if compare1 is not equal to 'q'
        if (strcmp(compare1, "q") != 0) {
            // Prompt user to enter string
            printf("Type the 2nd string to compare:\n");
            // Read string and store in compare2
            fgets(compare2, BUFFER_SIZE1, stdin);
            compare2[strlen(compare2) - 1] = '\0';
            // Compare 1st and 2nd string and store result in result
            result = strcmp(compare1, compare2);
            // Display result of comparison
            if (result < 0)
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
            else if (result == 0)
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
            else
                printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
        }
    } while (strcmp(compare1, "q") != 0);
    printf("*** End of Comparing Strings Demo ***\n\n");

}

void fundamentals(void)
{
    printf("*** Start of Indexing Strings Demo ***\n");
    char    buffer1[BUFFER_SIZE1];
    char    numInput[NUM_INPUT_SIZE];
    size_t  position;
    do {
        printf("Type not empty string (q - to quit):\n");//Prompt User to input string
        fgets(buffer1, BUFFER_SIZE1, stdin);//Read the string
        buffer1[strlen(buffer1) - 1] = '\0';//strlen = string length
        if (strcmp(buffer1, "q") != 0) {// check for "q"
            printf("Type the character position within the string:\n");//prompt user to input character position
            fgets(numInput, NUM_INPUT_SIZE, stdin);//Reads character position as string
            numInput[strlen(numInput) - 1] = '\0';
            position = atoi(numInput);
            if (position >= strlen(buffer1)) {//Convert numeric input to type int
                position = strlen(buffer1) - 1;//check if position is greater or equal to length of input string
                //If this is true - sets position to the last valid index and prints message
                printf("Too big... Position reduced to max. available\n");
            }
            printf("The character found at %d position is \'%c\'\n",
                (int)position, buffer1[position]);//Prints character found at specified position
        }
    } while (strcmp(buffer1, "q") != 0); //Type q to quit the program
    printf("*** End of Indexing Strings Demo ***\n\n");//End of indexing strings demo

    printf("*** Start of Measuring Strings Demo ***\n");
    char buffer2[BUFFER_SIZE1];
    // Loop until user inputs 'q'
    do {
        printf("Type a string (q - t quit):\n");
        // read string from user and store in buffer2
        fgets(buffer2, BUFFER_SIZE1, stdin);
        // remove newline character and replace with null terminator
        buffer2[strlen(buffer2) - 1] = '\0';
        // cheack if user inputed 'q'
        if (strcmp(buffer2, "q") != 0)
            printf("The length of \'%s\' is %d characters\n",
                buffer2, (int)strlen(buffer2));
    } while (strcmp(buffer2, "q") != 0); // Loop until user enters q
    printf("*** End of Measuring Strings Demo ***\n\n");
}

void tokenizing(void) {
    printf("*** Start of Tokenizing Words Demo ***\n:");
    char words[BUFFER_SIZE2];//a string array with size 300 is declared
    char* nextWord = NULL; //A char pointer nextWord is created and initialized with NULL address
    int wordsCounter;
    do {
        printf("Type a few words separated by space (q- to quit):\n");
        fgets(words, BUFFER_SIZE2, stdin);//Reads the maximum of character(300) from standard input and stores it in words array
        words[strlen(words) - 1] = '\0'; //finds the length of the array and assigns null terminator to the last index of the array
        if (strcmp(words, "q") != 0); { //Compares words with q lexicographically and checks if the returned value is not equal to 0
            nextWord = strtok(words, " ");//splits the string into tokens at the occurence of delimiter " " and returns the first token
            wordsCounter = 1;
            while (nextWord) { //iterates through all the tokens in the string
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); //displays the token
                nextWord = strtok(NULL, " ");//the next token is obtained 
            }
        }
    } while (strcmp(words, "q") != 0);//the do while continues to iterate until the condition becomes false
    printf("*** End of Tokenizing Words Demo ***\n\n");

    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[BUFFER_SIZE2];//a string array with size 300 is declared
    char* nextSentence = NULL; //A char pointer nextSentence is created and initialized with NULL address
    int sentencesCounter;
    do {
        printf("Type a few sentences separated by dot(q - to quit):\n");
        fgets(sentences, BUFFER_SIZE2, stdin); //Reads the maximum of character(300) from standard input and stores it in sentences array
        sentences[strlen(sentences) - 1] = '\0'; //finds the length of the array and assigns null terminator to the last index of the array
        if ((strcmp(sentences, "q") != 0)) { //Compares words with q lexicographically and checks if the returned value is not equal to 0
            nextSentence = strtok(sentences, "."); //splits the string into tokens at the occurence of delimiter "." and returns the first token
            sentencesCounter = 1;
            while (nextSentence) {  //iterates through all the tokens in the string
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence); //displays the token
                nextSentence = strtok(NULL, "."); //the next token is obtained
            }
        }
    } while (strcmp(sentences, "q") != 0);//the do while continues to iterate until the condition becomes false
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}

int main() {
	
	converting();
    manipulating();
    fundamentals();
    tokenizing();

	return 0;

}