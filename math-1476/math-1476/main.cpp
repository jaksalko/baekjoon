//
//  main.cpp
//  math-1476
//
//  Created by 정문경 on 2020/04/30.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    int e,s,m; // e 15 s 28 m 19
    
    int year;
    
    cin >> e >> s >> m;
    
    //year = e + 15*ek;
    
    //e + 15*ek == s + 28*sk;
    //s + 28*sk == m + 19*mk;
    //m + 19*mk == e + 15*ek;
    //3차 연립방정식?
    
    year = 1;
    while (true) {
        if((year-e)%15 == 0 && (year-s)%28 == 0 && (year-m)%19 == 0 )
        {
            cout << year;
            break;
        }
        year++;
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
