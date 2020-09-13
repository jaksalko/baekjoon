//
//  main.cpp
//  string-10953
//
//  Created by 정문경 on 2020/09/13.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
int sum(string line);
int main(int argc, const char * argv[]) {
   
    int n = 0;
    vector<int> answer;
    
    cin >> n;
    for(int i = 0 ; i< n ; i++)
    {
        string str;
        cin >> str;
        answer.push_back(sum(str));
    }
    
    for(int i = 0 ; i < answer.size() ; i++)
    {
        cout << answer[i] << endl;
        
    }
    return 0;
}

int sum(string line)
{
    int num =0;
    stringstream ss(line);
    string temp;
    while (getline(ss, temp, ',')) {
       
        num += stoi(temp);
    }
    
    return num;
}
