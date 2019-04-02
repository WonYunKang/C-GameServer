//
//  main.cpp
//  Struct
//
//  Created by WonYun Kang on 18/03/2019.
//  Copyright © 2019 Kyun. All rights reserved.
//

#include <iostream>
using namespace std;

struct StudentInfo{//구조체 정의
    char bloodtype;
    int stdnumber;
    float grade;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    StudentInfo si1 ={'A',20152520,2.5f};//이렇게도 가능
    StudentInfo si2;
   /*
    si1.bloodtype = 'A';
    si1.stdnumber=20152520;
    si1.grade=3.5f;
    */
    char c ='B';
    int i = 129;
    float f =4.5f;
    
    int a = 123;//일반적인 변수
    
    int *p; //포인터 변수 정의
    p=&a;//p가 a를 가리키게 만든다.
    
    /*int* 포인터 변수는 int 타입의 변수만 가리킬 수 있다 , char 타입의 변수를 가리키기 위해서는 char* 타입의 변수가 필요하다*/
    int sum = 100;
    void* pv = &sum;//100이 담긴 sum의 주소를 pv(void 형 포인터)에 저장 -> 어떤 타입이 담겨있는지 모름
    
    int* su = (int*)pv;//void 형을 int 로 형변환후 su 에 담는다 -> int 로 형변환 하면서 int형이 담겨 있음을 알려줌
    
    si2.bloodtype = 'B';
    si2.stdnumber=1234123;
    si2.grade=2.3f;
    
    cout << "학번 : " << si1.stdnumber <<"\n";
    cout << "c의 주소 : "<< (int *)&c << "\n";
    cout << "i의 주소 : "<< &i << "\n";
    cout << "f의 주소 : "<< &f << "\n";
    cout << "&a = "<< &a <<"\n";
    cout << "p = "<< p << "\n";
    cout << "&p = "<< &p <<"\n";
    cout << "void = "<< &pv <<"\n";
    cout << "void su = "<< &su<<"\n";
    
    return 0;
}
