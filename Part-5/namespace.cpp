#include <iostream>

// namespace in c++

namespace first {
    int x = 2;
}

namespace second {
    int x = 3;
}

int main() {
    using namespace first; 
    int x = 0;            
    std::cout << x;       
    std::cout << second::x;      
    
    return 0;
}
