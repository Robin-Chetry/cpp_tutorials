#include <iostream>

int main(){
// typedef existing_type new_alias;-------> synatx

typedef int Integer;
Integer x = 5; // 'x' is now of type 'int'


typedef int* IntPointer;
IntPointer ptr = nullptr; // 'ptr' is now of type 'int*'


typedef void (*FunctionPointer)(int);
void myFunction(int a); {
    // function code
}
FunctionPointer fp = myFunction; // 'fp' is now a pointer to a function that takes an int and returns void

}


