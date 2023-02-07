//
//  main.cpp
//  SandBox
//
//  Created by Jacob Lim on 2023/02/04.
//

#include <iostream>
#include <vector>



void execute(std::vector<int>& vector, std::string method){
    
    int number;
    
  if (method == "push")
  {
      std::cin >>number;
      vector.push_back(number);
  }else if (method == "pop")
  {
      if (vector.empty()){
          std::cout << -1 << std::endl;
      }
      else
      {
          std::cout << vector.back() << std::endl;
          vector.erase(vector.begin() + vector.size() - 1);
      }
  }
    else if (method == "top")
    { if (vector.empty()){
        std::cout << -1 << std::endl;
    }
    else
    {
        std::cout << vector.back() << std::endl;
    }
    }
    else if (method == "size")
    {
        std::cout << vector.size() << std::endl;
    }else if (method == "empty")
    {
        vector.size() == 0 ? std::cout << 1 << std::endl : std::cout << 0 << std::endl;
    }
}

int main(int argc, const char * argv[]) {
   
    unsigned int size;
    std::string method;
    std::vector<int> stack;
    
    std::cin >> size;
    
    stack.reserve(size);
    
    for (int i = 0; i < size; ++i)
    {
        std::cin >> method;
        execute(stack, method);
    }
    
    return 0;
}

