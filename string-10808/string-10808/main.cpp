//
//  main.cpp
//  string-10808
//
//  Created by 정문경 on 2020/05/12.
//  Copyright © 2020 정문경. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string S;
    cin >> S;
    int arr[26] = {0,};
    for(int i = 0 ; i < S.size() ; i++)
    {
        int a = S[i] - 'a';
        arr[a]++;
    }
    
    for(int i = 0 ; i < 26 ; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
