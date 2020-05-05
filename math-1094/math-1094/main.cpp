//
//  main.cpp
//  math-1094
//
//  Created by 정문경 on 2020/05/04.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int length = 1;
    int count = 0;
    int X;
    cin >> X;
    
    
    while(X != 0)
    {
        while(length*2 <= X)
        {
            length = length * 2;
        }
        X -= length;
        count ++;
        length = 1;
    }
    cout << count;
    
    return 0;
}
