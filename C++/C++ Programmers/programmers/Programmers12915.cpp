//
//  Programmers12915.cpp
//  programmers
//
//  Created by 이정엽 on 2023/10/30.
//

#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

static bool comp(pair<string, char>& a, pair<string, char>& b);

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    map<string, char> mp;
    for(int i = 0; i < strings.size(); i++){
        mp[strings[i]] = strings[i][n]; // value에 값을 넣는다.
    }

    vector<pair<string, char>> vec(mp.begin(), mp.end()); // 맵 형식을 추출

   
    sort(vec.begin(), vec.end(), comp); //value를 기준으로 정리

    for(const auto& pair : vec){
        answer.push_back(pair.first);
    }

    return answer;
}

static bool comp(pair<string, char>& a, pair<string, char>& b) {//value기준 정렬하기위해 정의한 함수
    return a.second < b.second;
}



int N;
bool cmp(string a, string b){
    if(a[N] == b[N]){
        return a < b;
    }
    else{
        return a[N] < b[N];
    }
}

vector<string> solution(vector<string> strings, int n) {
    N=n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
}

