#include "Employee.h"

//Constructors
employee::employee () {
  setID (0);
}

employee::~employee () {
    setID (0);
    setAge (0);
    setSalary (0);
}

//"Set" functions
void employee::setID (int IDT) {
    ID = IDT;
}

void employee::setName (string nameT) {
    name = nameT;
}

void employee::setAge (int ageT) {
    age = ageT;
}

void employee::setRole (string roleT) {
    role = roleT;
}

void employee::setSalary (int salaryT) {
    salary = salaryT;
}

//"Get" functions
int employee::getID () {
    return ID;
}

string employee::getName (){
    return name;
}

int employee::getAge () {
    return age;
}

string employee::getRole () {
    return role;
}

int employee::getSalary () {
    return salary;
}
