//
//  main.cpp
//  string-11719
//
//  Created by 정문경 on 2020/09/13.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string str;
    
    for(int i = 0 ; i < 100 ; i++)
    {
        getline(cin,str);
        cout << str << endl;
    }
    
    
    
    return 0;
}
