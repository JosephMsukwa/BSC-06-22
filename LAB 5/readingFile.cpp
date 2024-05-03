#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For toupper()

using namespace std;

// Function to calculate the number of vowels
int countVowels(const string& str) 
{
    int vowelCount = 0;
    for (char ch : str) 
    {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') 
        {
            vowelCount++;
        }
    }
    return vowelCount;
}

// Function to reverse a string
string Reverse(const string& str) 
{
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) 
    {
        reversed += str[i];
    }
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str)
 {
    string result;
    bool capitalizeNext = true;

    for (char ch : str)
    {
        if (isalpha(ch)) 
        {
            if (capitalizeNext) 
            {
                result += toupper(ch);
                capitalizeNext = false;
            } else {
                result += ch;
            }
        } else {
            result += ch;
            capitalizeNext = true;
        }
    }

    return result;
}

int main() {
    ifstream inputFile("File.txt"); // Replace with your actual file name
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string fileData;
    getline(inputFile, fileData); // Read the entire line from the file

    // Calculate and output the number of vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    // Calculate and output the number of words
    int wordCount = 0;
    for (char ch : fileData) 
    {
        if (isspace(ch)) {
            wordCount++;
        }
    }
    wordCount++; // Add 1 for the last word
    cout << "Number of words: " << wordCount << endl;

    // Reverse the statement and output
    string reversedStatement = Reverse(fileData);
    cout << "Reversed statement: " << reversedStatement << endl;

    // Capitalize the second letter of each word and output
    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Capitalized statement: " << capitalizedStatement << endl;

    inputFile.close();
    return 0;
}