//
//  main.cpp
//  string-9012
//
//  Created by 정문경 on 2020/09/13.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
   
    int n;
    vector<string> answer;
    
    cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        string str;
        cin >> str;
        int open = 0;
        for(int j = 0 ; j < str.size() ; j++)
        {
            
            
            
            if(str[j] == '(')
            {
               
                open++;
            }
            else if(str[j] == ')')
            {
               
                open--;
            }
           
            if(open < 0 )
            {
                
                answer.push_back("NO");
                break;
            }
            
            else if(j == str.size()-1)
            {
                if(open == 0)
                {
                    answer.push_back("YES");
                }
                else
                {
                    answer.push_back("NO");
                }
            }
        }
        
        
       
    }
    
    for(int i = 0 ; i < answer.size() ; i++)
    {
        cout << answer[i] << endl;
    }
    
    return 0;
}
