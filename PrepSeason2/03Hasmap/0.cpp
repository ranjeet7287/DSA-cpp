#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> myUnorderedMap;

    // Inserting elements
    myUnorderedMap[1] = "Apple";
    myUnorderedMap[2] = "Banana";
    myUnorderedMap.insert({3, "Orange"});

    // Accessing elements
    std::cout << "Key 1 has value: " << myUnorderedMap[1] << std::endl;

    // Check if key exists
    if (myUnorderedMap.find(2) != myUnorderedMap.end()) {
        std::cout << "Key 2 found: " << myUnorderedMap[2] << std::endl;
    }

    // Iterate over the unordered_map
    for (const auto& pair : myUnorderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Remove an element
    myUnorderedMap.erase(2);

    // Size of unordered_map
    std::cout << "Size of unordered_map: " << myUnorderedMap.size() << std::endl;

    return 0;
}
