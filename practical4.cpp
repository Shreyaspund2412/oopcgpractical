#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // File name for output and input
    string filename = "student_info.txt";

    // Create and open the output file
    ofstream outFile(filename);

    // Check if the file is opened successfully
    if (!outFile) {
        cerr << "Error opening the file for writing!" << endl;
        return 1;
    }

    // Write data to the file
    outFile << "Name: John Doe\n";
    outFile << "Roll Number: 12345\n";
    outFile << "Class: 12th Grade\n";
    outFile << "Date of Birth: 01-01-2005\n";
    outFile << "Blood Group: O+\n";
    outFile << "Contact Address: 123 Main St, City\n";

    // Close the output file
    outFile.close();

    // Open the file again for reading
    ifstream inFile(filename);

    // Check if the file is opened successfully
    if (!inFile) {
        cerr << "Error opening the file for reading!" << endl;
        return 1;
    }

    // Read data from the file and display it
    string line;
    cout << "\nReading from the file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the input file
    inFile.close();

    return 0;
}
