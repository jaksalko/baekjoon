//
//  main.cpp
//  string-8958
//
//  Created by 정문경 on 2020/09/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    vector<int> answer;
    string line;
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        int count = 0;
        cin >> line;
        int continuity = 0;
        
        for(int j = 0 ; j < line.length() ; j++)
        {
            if(line[j] == 'O')
            {
                continuity++;
                
            }
            else
            {
                continuity = 0;
            }
            count += continuity;
        }
        answer.push_back(count);
    }
   
    for(int i = 0 ; i < answer.size() ; i++)
    {
        cout << answer[i] << endl;
    }
    
    
    
    return 0;
}
