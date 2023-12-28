////
////  Programmers12926.cpp
////  programmers
////
////  Created by 이정엽 on 2023/10/28.
////
//
//#include "Programmers12926.hpp"
//#include <string>
//#include <vector>
//
////넘아가는것에 대한 조건을 사용할떄는 나머지를 이용해서 넘어간것에 대한 조건을 걸어준다.
//using namespace std;
//
////string solution(string s, int n) {
////    string answer = "";
////
////    for(int i = 0; i < s.size(); i++){
////        char c = s[i];
////        if(s[i] == ' '){
////            answer += ' ';
////            continue;
////        }
////        int num = int(c);
////        // if(num > 64 && num < 91 && num > 96 && num < 123)
////        int a = num + n;
////        if(a > 122){
////            int ca = a - 122;
////            a = 96 + ca;
////        }
////        else if(a > 90 && a < 97){
////            int ca = a - 90;
////            a = 64 + ca;
////        }
////        answer += char(a);
////    }
////
////    return answer;
////}
//
//string solution(string s, int n) {
//    
//    for(int i=0; i<s.size(); i++){
//        if(s[i]>='A' && s[i]<='Z'){
//            s[i] = (s[i]+n-'A')%26 + 'A';
//        }
//        
//        else if(s[i]>='a' && s[i]<='z'){
//            s[i] = (s[i]+n-'a')%26 + 'a';
//        }
//    }
//    return s;
//}
//int main() {
//    solution("AB", 1);
//}
//
//
////s    n    result
////"AB"    1    "BC"
