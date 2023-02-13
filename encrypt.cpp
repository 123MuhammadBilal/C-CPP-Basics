#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // Ask user to select a file
    cout << "Enter the file path to encrypt: ";
    string filePath;
    cin >> filePath;

    // Open the file for reading
    ifstream inFile;
    inFile.open(filePath);

    // Check if the file is successfully opened
    if (!inFile) {
        cout << "Error opening file.\n";
        return 1;
    }

    // Encrypt the contents of the file
    string line;
    string encryptedData;
    const string encryptionKey = "123";

    while (getline(inFile, line)) {
        for (int i = 0; i < line.length(); i++) {
            char character = line[i];
            char encryptedCharacter = character ^ encryptionKey[i % encryptionKey.length()];
            encryptedData += encryptedCharacter;
        }
        encryptedData += '\n';
    }

    // Close the input file
    inFile.close();

    // Save the encrypted data to a new file
    cout << "Enter the file path to save the encrypted data: ";
    string encryptedFilePath;
    cin >> encryptedFilePath;

    ofstream outFile;
    outFile.open(encryptedFilePath);

    if (!outFile) {
        cout << "Error opening file.\n";
        return 1;
    }

    outFile << encryptedData;

    // Close the output file
    outFile.close();

    cout << "File encrypted successfully.\n";
    return 0;
}
