//
//  main.cpp
//  Test
//
//  Created by Jacob Lim on 2023/01/04.
//
#include <iostream>

void selfNum(unsigned);

unsigned ARR[10001];

int main(int argc,  char * argv[]) {
    

      
    for (int i = 1; i <= 10000; ++i) {
        selfNum(i);
    }
    
    for (int i = 1; i <= 10000; ++i){
        if (ARR[i] == 0)
            std::cout << i << std::endl;
    }
}

void selfNum(unsigned num){
    int value = 0;
    int ref = num;
    
    while (true)
    {
        if (ref < 1){
            break;
        }
        value += ref % 10;
        ref /= 10;
    }
    
    num += value;
    if (num <= 10000){
        ARR[num]++;
    }
}
