//
//  main.cpp
//  string-1152
//
//  Created by 정문경 on 2020/05/11.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int substr(string str , char delimiter)
{
    vector<string> v;
    stringstream ss(str);
    string temp;
    
    while(getline(ss,temp,delimiter))
    {
        if(temp.length() != 0)
            v.push_back(temp);
        //cout << temp <<"  temp length :" << temp.length() << endl;
    }
    
    return v.size();
    
}

int main(int argc, const char * argv[]) {
    string s;
    //cin.ignore(256,' ');
    getline(cin,s);
    cout << substr(s, ' ');
    return 0;
}
