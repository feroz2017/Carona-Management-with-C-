// Including Required Libraries
#include<iostream>
#include<cstring> // For using C-Style String
#include<cstdlib> 
#define MAX_LENGTH 30
using namespace std;

// Function displays length of longest common subsequence for First String[0 to Len - 1], Second String[0 to Len - 1]
// Declaration of LCS And Using Dynamic Programming Approach
void longestCommonSubsequence( char *firstString, char *secondString, int fLen, int sLen );

// Starting Point
int main()
{
    // Declares two C-Strings
    char First_String[MAX_LENGTH];
    char Second_String[MAX_LENGTH];
    // Taking First String as a input
    cout<<"\n Enter the first string: ";
    cin>>First_String;
    // Taking Second String as a input
    cout<<"\n Enter the second string: ";
    cin>>Second_String;
    // Getting Length of First String
    int Len1 = strlen(First_String);
    // Getting Length of Second String
    int Len2 = strlen(Second_String);
    // Calling the function which will get first lenght of LCS and then display it by backtrackin
    longestCommonSubsequence(First_String, Second_String, Len1, Len2);
    return 0;
}// End of Main Program


void longestCommonSubsequence( char *firstString, char *secondString, int fLen, int sLen )
{
    // Creates an two 2D integer array having
    // firstString length + 1 as number of rows
    // secondString length + 1 as number of columns
    int dummyArray[fLen + 1][sLen + 1];

    // The dummyArray[r][c] contains length of longest common subsequence of
    // fistString[0 to r - 1] and secondString[0 to c - 1]
    /*
    (Part-B)
    */
    // Loops till firstString length
    // Will Calculate the lenght of LCS 
    //Note:: There may be more than one LCS
    for (int r = 0; r <= fLen; r++)
    {
        // Loops till secondString length
        for (int c = 0; c <= sLen; c++)
        {
            // Checks if the row and column is zero
            if (r == 0 || c == 0)
            // Assigns matrix r and c position to zero
            dummyArray[r][c] = 0;
            // Otherwise checks firstString row minus one position value is equals to secondString column minus one index position value
            else if (firstString[r - 1] == secondString[c - 1])
            // Assigns matrix r and c position to its row minus one and column minus one index position value minus one
            dummyArray[r][c] = dummyArray[r - 1][c - 1] + 1;
            // Otherwise
            else
                // Assigns matrix r and c position to maximum value of its row minus one and column and row and column minus one index position value
                dummyArray[r][c] = max(dummyArray[r - 1][c], dummyArray[r][c - 1]);
            }// End of inner for loop
    }// End of outer for loop

    // Extracts the number stored at fLen and sLen position and stored it in index
    int index = dummyArray[fLen][sLen];

    // Create a character array to store the longest common subsequence string
    char lcs[index+1];
    // Set the terminating character at the index position of the array
    lcs[index] = '\0';

    int r = fLen, c = sLen;
    // Start from the right-most-bottom-most corner and one by one store characters in lcs[]
    /*
    (Part-C)
    */
    while (r > 0 && c > 0)
    {
        // If current character in firstString and secondString are same,
        // Then current character is part of longest common subsequence
        if (firstString[r-1] == secondString[c-1])
        {
            // Put current character in result array lcs
            lcs[index-1] = firstString[r-1];
            // Reduce values of r, c and index
            r--;
            c--;
            index--;
        }// End of if

        // Otherwise they are not same
        // Then find the larger of two and go in the direction of larger value
        else if (dummyArray[r - 1][c] > dummyArray[r][c - 1])
        // Decrease the r value by one
        r--;
        // Otherwise
        else
        // Decrease the c value by one
        c--;
    }// End of while

    // Displays the longest common subsequence lcs array
    cout << "\nLCS of " << firstString << " and " << secondString << " is " << lcs << endl;
}// End of method