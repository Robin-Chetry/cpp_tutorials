#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    std::cout << "Length of the string: " << str.length() << std::endl; // Output: 13


    std::string str = "";
    if (str.empty()) {
        std::cout << "The string is empty." << std::endl; // Output: The string is empty.
    }


    std::string str1 = "Hello";
    std::string str2 = ", world!";
    str1.append(str2);
    //str1 += str2;
    std::cout << str1 << std::endl; // Output: Hello, world!



    std::string str = "Hello, world!";
    std::string sub = str.substr(7, 5);
    std::cout << "Substring: " << sub << std::endl; // Output: world


    std::string str = "Hello, world!";
    size_t pos = str.find("world");
    if (pos != std::string::npos) {
        std::cout << "Found 'world' at position: " << pos << std::endl; // Output: 7
    }


    std::string str = "Hello, world!";
    str.replace(7, 5, "there");
    std::cout << str << std::endl; // Output: Hello, there!


    
    std::string str = "Hello, world!";
    str.erase(5, 7); // Erases ", world"
    std::cout << str << std::endl; // Output: Hello!


    std::string str = "Hello!";
    str.insert(5, ", world");
    std::cout << str << std::endl; // Output: Hello, world!



    std::string str = "Hello, world!";
    const char* cstr = str.c_str(); //c_str(): Returns a C-style null-terminated string (const char*).
    std::cout << cstr << std::endl; // Output: Hello, world!


    std::string str1 = "apple";
    std::string str2 = "banana";
    int result = str1.compare(str2);
    if (result == 0) {
        std::cout << "Strings are equal." << std::endl;
    } else if (result < 0) {
        std::cout << "str1 is less than str2." << std::endl; // Output: str1 is less than str2.
    } else {
        std::cout << "str1 is greater than str2." << std::endl;
    }



    std::string str = "Hello, world!";
    char ch = str.at(1); // Access character at index 1
    std::cout << "Character at index 1: " << ch << std::endl; // Output: e


    std::string str = "Hello, world!";
    for (auto it = str.begin(); it != str.end(); ++it) {
        std::cout << *it << " "; // Output: H e l l o ,   w o r l d !
    }
    std::cout << std::endl;
    


    std::string str = "Hello, world! Hello!";
    size_t pos = str.rfind("Hello");
    if (pos != std::string::npos) {
        std::cout << "Last occurrence of 'Hello' is at position: " << pos << std::endl; // Output: 14
    }



    std::string str = "Hello, world!";
    str.clear();
    std::cout << "String after clear: '" << str << "'" << std::endl; // Output: ''
    



    


    std::string str = "Hello, world!";
    str.resize(5);
    std::cout << "String after resize: " << str << std::endl; // Output: Hello
    str.resize(10, '!');
    std::cout << "String after resize with fill character: " << str << std::endl; // Output: Hello!!!!!





    return 0;
}
