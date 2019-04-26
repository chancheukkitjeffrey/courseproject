#include "Employee.h"

//Constructors
employee::employee () {
  setID (0);
}

employee::~employee () {
    setID (0);
    setAge (0);
    setSallary (0);
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

void employee::setSallary (int sallaryT) {
    sallary = sallaryT;
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

int employee::getSallary () {
    return sallary;
}

//Address Class:

employee::address::address(){
//default const
}

employee::address::~address(){
//destruct
}

employee::address::address(string streetT, string cityT, string stateT, int zipT) {
//constructor with mem vars
	street = streetT;
	city = cityT;
	state = stateT;
	zip = zipT;
}

void employee::address::setStreet(string streetT) {
	street = streetT;
}
void employee::address::setCity(string cityT) {
	city = cityT;
}
void employee::address::setState(string stateT) {
	state = stateT;
}
void employee::address::setZip(string zipT) {
	zip = zipT;
}

string employee::address::getStreet() {
	return street;
}
string employee::address::getCity() {
	return city;
}
string employee::address::getState() {
	return state;
}
string employee::address::getZip() {
	return zip;
}




