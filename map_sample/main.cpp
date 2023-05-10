#include <map>
#include <iostream>


int main() {
    std::map<std::string, int> grades;

    grades["Alice"] = 90;
    grades["Bob"] = 85;
    grades["Charlie"] = 80;
    grades["Dave"] = 75;

    for (const auto& [name, grade] : grades) {
        std::cout << name << ": " << grade << '\n';
    }
    return 0;
}