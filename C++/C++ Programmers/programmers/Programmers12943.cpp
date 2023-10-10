#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int answer = 0;
    while (true) {
        if (num == 1) {
            return answer;
        }
        if (answer >= 500) {
            return -1;
        }
        if (num % 2 == 0)
            num /= 2;
        else if (num % 2 == 1)
            num = (num * 3) + 1;
        answer++;
    }
    return answer;
}

int main(int argc, const char * argv[]) {
    int result = solution(8); // solution 함수의 반환 값을 저장
    cout << "Result: " << result << endl; // 결과를 출력
    return 0;
}
