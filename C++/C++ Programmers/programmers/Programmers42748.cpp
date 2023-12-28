////
////  Programmers42748.cpp
////  programmers
////
////  Created by 이정엽 on 2023/11/12.
////
//
//#include "Programmers42748.hpp"
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
////2중 벡터 구조로 commands를 받는데 {자르는 첫부분, 2번째 부분, 추출한 벡터를 정렬한 후 출력할 번째 값} i, j, k
////substring을 통해서 벡터 자른다. 그것을 sort를 이용해서 정렬을한다.
////그리고 substr를 통해서 추출...? => 이거는 문자열
////그냥 출력...
//vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//    vector<int> answer;
//    int i = 0; //자르는 값의 시작 정수
//    int j = 0; //자르는 값의 끝 정수
//    int k = 0; //추출할 값의 정수
//    
//    for(auto cmd : commands){
//        i = cmd[0] + 1;
//        j = cmd[1] + 1;
//        k = cmd[2] + 1;
//        
//        vector<int> slice(array.begin() + i, array.begin() + j + 1);
//        sort(slice.begin(), slice.end());
//        answer.push_back(slice[k]);
//        
//    }
//    
//    return answer;
//}
//
//int main(){
////    solution([1, 5, 2, 6, 3, 7, 4], [[2, 5, 3], [4, 4, 1], [1, 7, 3]]);
//}
