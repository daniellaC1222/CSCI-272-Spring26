// CSCI 272

// Pointers

#include <iostream> 

using namespace std;

int main(){
    
    int *p[10];
    
   //  for (int i =0; i < 10, ++i){
   //     *p[i];
   //     cout << *p[i] << endl;
   // }

    for (int i =0; i < 10, ++i){
        p[i] = new int;
        *p[i] = i;
        cout << p[i] << endl;
    }
    
    
    
    
    //1: declare a variable
    int a;
    
    //2: declare a pointer
    int *p;
    
    //3: make pointer point to 'a'
    // '&a' means 'address of a'
    p = &a;
    
    //4: assign a value to a
    a = 15;
    
    //5: print values & addresses
    cout << "p (address stored in p):" << p << endl;
    //address of 'a'
    cout << "&p (address of pointer p):" << &p << endl;
    //address of 'p'
    cout << "&a (address of a):" << &a << endl;
    //address of 'a'
    cout << "*p (value pointed to by p):" << *p << endl;
    //value of 'a'
    cout << "a (value of a):" << a << endl;
    
    cout << endl;
    
    //6: modify the value of 'a' using the pointer
    //'*p' means go to the address of p points to and change the value there
    *p = 14;
    
    //7: print 'a' again and see
    cout << "a (after *p = 14):" << a << endl;
    
    
    return 0;
}
