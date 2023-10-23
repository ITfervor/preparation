//
//  Programmers12940.cpp
//  programmers
//
//  Created by 이정엽 on 2023/10/22.
//

#include "Programmers12940.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    vector<int> vec1;
    vector<int> vec2;
    int a = 0;
    int max = 1;
    
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            vec1.push_back(i);
        }
    }
    
    
    for(int i = 2; i <= m; i++){
        if(m % i == 0){
            vec2.push_back(i);
        }
    }
    
    
   while (a < vec1.size()) {
        for (int i = 0; i < vec2.size(); i++) {
            if (vec1[a] == vec2[i]) {
                max = vec2[i];
                break;
            }
        }
        a++;
    }
    
    m /= max;
    n /= max;
    
    answer.push_back(max);
    int min = max * m * n;
    answer.push_back(min);
    
    return answer;
}



int main(){
    solution(3, 12);
}

