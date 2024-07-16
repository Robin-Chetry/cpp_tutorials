#include <iostream>



namespace MyNamespace {
    int myVariable;
    void myFunction() {
        // function code
    }
}


int main()
{

  using MyNamespace::myVariable;
  myVariable = 5; // Directly access myVariable

using namespace MyNamespace;
myFunction(); // Directly access myFunction
}

