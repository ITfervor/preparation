////
////  Concept.cpp
////  CPPLecture
////
////  Created by 이정엽 on 2023/08/20.
////
//
//#include <iostream>
//
//#include <list>
//#include <algorithm>
//
//using namespace std;
////컨셉
//
//// 1) requires clause(절)
//template <typename  T>
//requires std::integral<T> //T에 딱 떨어지는 정수형만 받을수 있도록 한다.
//
//void TestConcept(T number)
//{
//    cout << number << endl;
//}
//
//// 2) Trailing Requtires Clause(뒤에 붙는~)
//template <typename  T>
//void TestConcept2(T number) requires std::integral<T> //뒤쪽에 붙혀도 된다.
//{
//    cout << number << endl;
//}
//
//
////3) Constrained Template Parameter (강요된)
//template <std:: integral T>
//void TestConcept3(T number)
//{
//    cout << number << endl;
//}
//
////4) Abbreviated Function Template
//void TestConcept4(std:: integral auto number)
//{
//    cout << number << endl;
//}
//
//class GameObject
//{
//    
//};
//
//class Knight : public GameObject
//{
//    
//};
//
//template<typename T>
//requires std::derived_from<T, GameObject> // T가 GameObject를 해서 파생된 아이들만 받아주겠다.
//void TestObj(T *Obj)
//{
//    
//}
//
//int main()
//{
//    TestConcept(10);
//    //TestConcept(10.3f) //정수형으로 컨셉을 잡았지만 실수형이라서 오류 발생
//    
//    //밑에는 이미 만들어진 컨셉
//    // 언어관련
//    
//    // 산술 관련
//    
//    // 생명주기 관련
//    
//    // 비교관련
//    
//    // 오브젝트 관련
//    
//    // 호출관련
//    
//    // 반복자 관련
//    
//    // 알고리즘/범위 관련
//    
//    TestObj(new Knight);
//    //TestObj(new int) //에러발생 -> 상관없는것을 대입하는 것이기 때문에
//    
//    //concept직접 만드는것도 가능
//}
//
