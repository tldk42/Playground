#include <iostream>

int main(int argc,  char * argv[]) {
    unsigned n;
    unsigned count = 0;
    int v;
    
    std::cin >> n;
    
    int array[n];
    
    for (auto& i : array){
        std::cin >> i;
    }
    
    std::cin >> v;
    
    for (auto i : array){
        if (i == v)
        count++;
    }
    
    std::cout << count;
}