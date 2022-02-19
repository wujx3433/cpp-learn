#include<cstdio>

class Student {
public:
	char* name;
	char* gender;
	int age;
	int score;
	void Print() {
		printf("%s性别%s，年龄%d，成绩%d\n", name, gender, score);
	}
};

int main() {
	class Student stu1;
	stu1.name = "a";
	stu1.gender = "m";
	stu1.age = 20;
	stu1.score = 60;
	stu1.Print();

	Student* stu2 = new Student;
	stu2->name = "b";
	stu2->gender = "f";
	stu2->age = 20;
	stu2->score = 60;
	stu2->Print();
	delete stu2;

	return 0;
}