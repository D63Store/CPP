#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


struct Student {
	string Name;
	int Mark;
};

void AddStudents(vector<Student>& Students, int TotalStudents) {
	for (int i = 0; i < TotalStudents; ++i) {
		string StudentName;
		int StudentMark;
		cout << "Введите имя студенту с номером " << i + 1 << " >>> ";
		cin >> StudentName;
		cout << "Введите оценку студенту " << StudentName << " >>> ";
		cin >> StudentMark;

		Students.push_back({ StudentName, StudentMark });



	}
}

void GetSortedStudents(vector<Student>& Students) {
	
	sort(Students.begin(), Students.end(), [](const Student& a, const Student& b) {
		return a.Mark > b.Mark;
		});

	cout << "Список студентов и их оценок (от самой высокой до самой низкой):" << endl;
	for (const auto& student : Students) {
		cout << "Имя: " << student.Name << ", Оценка: " << student.Mark << endl;
	}
}




int main() {
	setlocale(LC_ALL, "RU");
	int TotalStudents = { 0 };
	vector<Student> Students;



	cout << "Сколько студентов необходимо добавить? >>> ";
	cin >> TotalStudents;
	
	AddStudents(Students, TotalStudents);
	GetSortedStudents(Students);

}
