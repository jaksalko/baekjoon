//
//  main.cpp
//  string-11721
//
//  Created by 정문경 on 2020/09/13.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string line;
    vector<string> split;
    
    cin >> line;
    
    for(int i = 1 ; i <= line.size() ; i++)
    {
        
        cout << line[i-1];
        if(i%10 == 0)
        {
            cout << endl;
        }
    }
    
    return 0;
}
