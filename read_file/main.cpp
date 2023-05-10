#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("../info.txt"); // Open the file
    if (!file.is_open()) { // Check if the file opened successfully
        std::cerr << "Error opening file\n";
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) { // Read the file line by line
        std::cout << line << '\n'; // Print each line to the console
    }

    file.close(); // Close the file
    return 0;
}
