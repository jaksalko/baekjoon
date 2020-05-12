//
//  main.cpp
//  greedy-5585
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    n = 1000-n;
    int count = 0 ;
    while(n != 0)
    {
        if(n >= 500)
        {
            n -= 500;
        }
        else if( n >= 100)
        {
            n -= 100;
        }
        else if( n >= 50)
        {
            n -= 50;
        }
        else if( n >= 10)
        {
            n -= 10;
        }
        else if( n >= 5)
        {
            n -= 5;
        }
        else if( n >= 1)
        {
            n -= 1;
        }
        count++;
    }
    
    cout << count;
    return 0;
}

