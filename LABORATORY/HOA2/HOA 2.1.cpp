#include <iostream>
#include <string.h>

class Student {
    private:
        std::string studentName;
        int studentAge;
    public:
    // constructor
        Student (std::string newName = "Ally" , int newAge = 18) {
            studentName = std::move(newName);
            studentAge = newAge;
            std::cout << "It called the Constructor." << std::endl;
        };
    
    // deconstructor
    ~Student() {
        std::cout << "It called the Destructor." <<std::endl;
    }

    // copy constructor
    Student (const Student &copyStudent) {
        std::cout << "It called the Copy Constructor." << std::endl;
        studentName = copyStudent.studentName;
        studentAge = copyStudent.studentAge;
    }

    // display attributes
    void printDetails() {
        std::cout << this->studentName << " " << this->studentAge << std::endl;
    }

};

int main() {
   const size_t j = 5;

   Student studentList[j] = {};
   std::string nameList[j] = {"Adira" , "Niki" , "Rinoah" , "Saanvi" , "Dasha"};
   int ageList[j] = {5, 9, 7, 3, 1};
   
    for (int i = 0; i < j; i++) { // loop A
        Student *ptr = new Student (nameList[i] , ageList[i]);
        studentList[i] = *ptr;

        delete ptr;

        ptr = nullptr;
    }

    for (int i = 0; i < j; i++) { // loop B
        studentList[i].printDetails();
    }

   return 0;
}
