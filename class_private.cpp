#include<iostream>
using namespace std;

class Student {
private:
	char* m_name;
	char* m_gender;
	int m_age;
	int m_score;
public:
	void setname(char* name);
	void setgender(char* gender);
	void setage(int age);
	void setscore(int score);
	void Print();
};

void Student::setname(char* name) {
	name = m_name;
}
void Student::setgender(char* gender) {
	gender = m_gender;
}
void Student::setage(int age) {
	age = m_age;
}
void Student::setscore(int score) {
	score = m_score;
}
void Student::Print() {
	cout << m_name << ",�Ա�" << m_gender << "��������" << m_age << "���ɼ���" << m_score << endl;
}

int main() {
	Student stu1;
	stu1.setname("����");
	stu1.setgender("��");
	stu1.setage(20);
	stu1.setscore(60);
	stu1.Print();

	Student* stu2 = new Student;
	stu2->setname("��÷÷");
	stu2->setgender("Ů");
	stu2->setage(20);
	stu2->setscore(60);
	stu2->Print();
	delete stu2;

	return 0;
}