#include <iostream>
#include <string>
#include "Person.h"

int main(void)
{
    const int num = 10;
    Person* people = new Person[num]; // Person 객체 배열
    std::string name, tel;
    int count = 0;

    // 3명의 정보를 입력받아 배열에 저장
    for (int i = 0; i < num; ++i)
    {
        if (i == 0)
            std::cout << "이름과 번호를 입력해 주세요.\n그만 입력받으시려면 '*'을 입력해 주세요" << std::endl;
        std::cout << "이름을 입력하세요: ";
        std::cin >> name;
        if (name == "*")
            break;
        std::cout << "전화번호를 입력하세요: ";
        std::cin >> tel;
        if (tel == "*")
            break;
        people[i].set(name, tel);
        count++;
    }

    // 이름을 입력받아 해당 전화번호 출력
    std::cout << "검색할 이름을 입력하세요: ";
    std::cin >> name;
    bool found = false;
    for (int i = 0; i < count; ++i)
    {
        if (people[i].get_name() == name)
        {
            std::cout << "전화번호: " << people[i].get_tel() << std::endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "해당 이름의 전화번호를 찾을 수 없습니다." << std::endl;
    }

    delete[] people; // 동적 배열 메모리 해제

    return 0;
}
