#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    cout << "Enter the file path of the encrypted file: ";
    string file_path;
    cin >> file_path;

    ifstream in(file_path, ios::binary);
    if (!in) {
        cout << "Error: unable to open file " << file_path << endl;
        return 1;
    }

    cout << "Enter the password: ";
    string password;
    cin >> password;

    stringstream buffer;
    buffer << in.rdbuf();
    string encrypted_data = buffer.str();
    in.close();

    // Decryption logic here, using the password and encrypted_data strings

    cout << "Enter the file path to save the decrypted file: ";
    string save_path;
    cin >> save_path;

    ofstream out(save_path, ios::binary);
    if (!out) {
        cout << "Error: unable to open file " << save_path << " for writing" << endl;
        return 1;
    }

    // Write decrypted data to the output file
        // Decryption logic
    string decrypted_data;
    for (int i = 0; i < encrypted_data.length(); i++) {
        decrypted_data += encrypted_data[i] ^ password[i % password.length()];
    }
    out.write(decrypted_data.c_str(), decrypted_data.length());
    out.close();

    cout << "Decrypted file successfully saved to " << save_path << endl;

    return 0;
}
