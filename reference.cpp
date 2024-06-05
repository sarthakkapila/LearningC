#include <iostream>
using namespace std;

// void increment(int x) {
//     x++; 
// }

// void increment(int& x){
//     ++x;
// }
// int main() {
//     int num = 5;
//     std::cout << "Original value of num: " << num << std::endl;
    
//     increment(num);
//     std::cout << "After incrementing: " << num << std::endl;
    
//     return 0;
// }


int add(int& a, int& b){                        // passing as reference for a and b
    a = 8;                                      // here a is 8
    b = 12;                                     // here a becomes 12 because a and b is passed as reference and we called add with a,a 
                                                // so b is being referenced to a's address 
    return a+b;                                 
}

int main(){
    int a = 3;                                  // a local is 3
    int b = 4;                                  // b local is 4
    int c = add(a,a);                           // now here's the interesting bit when we use add func which has reference of a and b 

    cout<<a<<endl<<b<<endl<<c;                  

    return 0;
}
