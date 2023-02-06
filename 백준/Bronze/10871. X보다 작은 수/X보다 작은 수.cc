#include <iostream>

int main(int argc,  char * argv[]) {
  
    // 1 <= n,x <= 10'000
    unsigned n, x, counter = 0;
    
    std::cin >> n >> x;
    
    unsigned arr[n];
    for (auto& i : arr){
        std::cin >> i;
        if (i < x){
            std::cout << i << " ";
        }
    }
    

}
