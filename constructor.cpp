#include<cstdio>

class Student {
private:
	char* m_name;
	int m_age;
	float m_score;
public:
	Student(char* name, int age, float score);
	void Print();
};

Student::Student(char* name, int age, float score) {
	m_name = name;
	m_age = age;
	m_score = score;
}

Student::Student() {
	m_name = nullptr;
	m_age = 0;
	m_score = 0.0f;
}

void Print() {
	printf("%s,����%d���ɼ�Ϊ%f\n", m_name, m_age, m_score);
}

int main() {
	Student stu1("�", 20, 60.0f);
	stu1.Print();

	Student* stu2 = new Student("�����", 20, 60.0f);
	stu2->Print();
	delete stu2;

	return 0;
}