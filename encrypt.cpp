#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// Function prototypes
void encryptFile(const string& inputFile, const string& outputFile, int key);
void decryptFile(const string& inputFile, const string& outputFile, int key);

int main(int argc, char *argv[]) {
    if (argc != 5) {
        cout << "Usage: " << argv[0] << " <mode> <input_file> <output_file> <key>" << endl;
        cout << "Modes: -e to encrypt, -d to decrypt" << endl;
        return 1;
    }

    string mode = argv[1];
    string inputFile = argv[2];
    string outputFile = argv[3];
    int key = atoi(argv[4]);

    if (mode == "-e") {
        encryptFile(inputFile, outputFile, key);
        cout << "File encrypted successfully!" << endl;
    } else if (mode == "-d") {
        decryptFile(inputFile, outputFile, key);
        cout << "File decrypted successfully!" << endl;
    } else {
        cout << "Invalid mode. Use -e for encryption or -d for decryption." << endl;
        return 1;
    }

    return 0;
}

void encryptFile(const string& inputFile, const string& outputFile, int key) {
    ifstream input(inputFile);
    if (!input) {
        cerr << "Error opening input file" << endl;
        exit(1);
    }

    ofstream output(outputFile);
    if (!output) {
        cerr << "Error opening output file" << endl;
        exit(1);
    }

    char ch;
    while (input.get(ch)) {
        // Simple Caesar cipher encryption
        output.put(ch + key);
    }

    input.close();
    output.close();
}

void decryptFile(const string& inputFile, const string& outputFile, int key) {
    ifstream input(inputFile);
    if (!input) {
        cerr << "Error opening input file" << endl;
        exit(1);
    }

    ofstream output(outputFile);
    if (!output) {
        cerr << "Error opening output file" << endl;
        exit(1);
    }

    char ch;
    while (input.get(ch)) {
        // Simple Caesar cipher decryption
        output.put(ch - key);
    }

    input.close();
    output.close();
}
