//
//  main.cpp
//  Test
//
//  Created by Jacob Lim on 2023/01/04.
//
#include <iostream>

void selfNum(unsigned, unsigned&);


int main(int argc,  char * argv[]) {
    int num;
    unsigned count = 0;
    
    
    std::cin >> num;
    
    for (int i = 1; i <= num; ++i)
    {
        selfNum(i, count);
    }
    
    std::cout << count;
}

void selfNum(unsigned num, unsigned& count){
   
    if (num <= 99)
    {
        count++;
        return;
    }

    int cache, cachedLastFrame, sum;

        cache = num % 10;
        cachedLastFrame = (num / 10) % 10;
        sum = cachedLastFrame - cache;
        num /= 10;
    
    while(true)
    {
        if (num < 10)
            break;
        
        cache = cachedLastFrame;
        cachedLastFrame = (num / 10) % 10;
        
        if (sum != cachedLastFrame - cache)
            return;
        num /= 10;
    }
    count++;
}
