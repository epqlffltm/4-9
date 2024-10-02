#include <iostream>
#include <string>
#include "Person.h"

int main(void)
{
    const int num = 10;
    Person* people = new Person[num]; // Person ��ü �迭
    std::string name, tel;
    int count = 0;

    // 3���� ������ �Է¹޾� �迭�� ����
    for (int i = 0; i < num; ++i)
    {
        if (i == 0)
            std::cout << "�̸��� ��ȣ�� �Է��� �ּ���.\n�׸� �Է¹����÷��� '*'�� �Է��� �ּ���" << std::endl;
        std::cout << "�̸��� �Է��ϼ���: ";
        std::cin >> name;
        if (name == "*")
            break;
        std::cout << "��ȭ��ȣ�� �Է��ϼ���: ";
        std::cin >> tel;
        if (tel == "*")
            break;
        people[i].set(name, tel);
        count++;
    }

    // �̸��� �Է¹޾� �ش� ��ȭ��ȣ ���
    std::cout << "�˻��� �̸��� �Է��ϼ���: ";
    std::cin >> name;
    bool found = false;
    for (int i = 0; i < count; ++i)
    {
        if (people[i].get_name() == name)
        {
            std::cout << "��ȭ��ȣ: " << people[i].get_tel() << std::endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        std::cout << "�ش� �̸��� ��ȭ��ȣ�� ã�� �� �����ϴ�." << std::endl;
    }

    delete[] people; // ���� �迭 �޸� ����

    return 0;
}
