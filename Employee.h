#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class employee {
private:
  int ID;
  string name;
  int age;
  string role;
  int salary;

public:
  employee ();
  //default connstructor

  ~employee ();
  //destructor

  //"Set" functions. Will take the parameter passed in and set the member variable equal to it
  void setID (int);
  void setName (string);
  void setAge (int);
  void setRole (string);
  void setSalary (int);

  //"Get" functions. Will return the member variable
  int getID ();
  string getName ();
  int getAge ();
  string getRole ();
  int getSalary ();

};


#endif
