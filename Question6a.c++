#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    float total_marks;
};

int main() {
    Student s1, s2;
    float average;

    // Input data for two students
    std::cout << "Enter details for student 1:\n";
    std::cout << "Name: ";
    std::cin >> s1.name;
    std::cout << "Age: ";
    std::cin >> s1.age;
    std::cout << "Total Marks: ";
    std::cin >> s1.total_marks;

    std::cout << "\nEnter details for student 2:\n";
    std::cout << "Name: ";
    std::cin >> s2.name;
    std::cout << "Age: ";
    std::cin >> s2.age;
    std::cout << "Total Marks: ";
    std::cin >> s2.total_marks;

    // Display information
    std::cout << "\nStudent 1: Name = " << s1.name << ", Age = " << s1.age << ", Total Marks = " << s1.total_marks << std::endl;
    std::cout << "Student 2: Name = " << s2.name << ", Age = " << s2.age << ", Total Marks = " << s2.total_marks << std::endl;

    // Calculate average marks
    average = (s1.total_marks + s2.total_marks) / 2.0f;
    std::cout << "\nThe average of total marks is: " << average << std::endl;

    return 0;
}