#include <iostream>


namespace MyNamespace {
    int myVariable;
    void myFunction() {
        // function code
    }
}

//To access members of a namespace, use the scope resolution operator ::.



int main(){

MyNamespace::myVariable = 5;
MyNamespace::myFunction();
}

