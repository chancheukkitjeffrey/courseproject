#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/* -Member Vars of the employee:
    -Employee ID
    -Name
    -Age
    -Adress ***
    -Role
    -Sallary

*/

#include <iostream>
#include <string>

using namespace std;

class employee {
private:
  int ID;
  string name;
  int age;
  string role;
  int sallary;
    
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
  void setSallary (int);
  
  //"Get" functions. Will return the member variable 
  int getID ();
  string getName ();
  int getAge ();
  string getRole ();
  int getSallary ();
  
	class address {
	private:
	  string street;
	  string city;
	  string state;
	  string zip;
	
	public:
		address();
		//default const
		
		~address();
		//destruct
		
		address(string, string, string, int);
		//constructor with mem vars
		
		void setStreet(string);
		void setCity(string);
		void setState(string);
		void setZip(string);
		
		string getStreet();
		string getCity();
		string getState();
		string getZip();

};
    address addr;

};


#endif



