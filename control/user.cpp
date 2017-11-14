#include "user.h"

User::User() {
	id = 0;
	password = "";
	name = "";
	phone = "";
	email = "";
	beginWeekDay = "";
	endWeekDay = "";
	beginTime = "";
	endTime = "";
}

string User::getName() {
	return name;
}

void User::setName(string value) {
	name = value;
}

string User::getPassword() {
	return password;
}

void User::setPassword(string value) {
	password = value;
}

string User::getPhone() {
	return phone;
}

void User::setPhone(string value) {
	phone = value;
}

string User::getEmail() {
	return email;
}

void User::setEmail(string value) {
	email = value;
}

string User::getBeginWeekDay() {
	return beginWeekDay;
}

void User::setBeginWeekDay(string value) {
	value[0] = toupper(value[0]);
	if (value == "Sunday" || value == "Monday" ||
		value == "Thursday" || value == "Wednesday" ||
		value == "Thirsday" || value == "Friday" ||
		value == "Friday") {
		beginWeekDay = value;
		return;
	}
	throw "Invalid input";
}

string User::getEndWeekDay() {
	return endWeekDay;
}

void User::setEndWeekDay(string value) {
	value[0] = toupper(value[0]);
	if (value == "Sunday" || value == "Monday" ||
		value == "Thursday" || value == "Wednesday" ||
		value == "Thirsday" || value == "Friday" ||
		value == "Friday") {
		endWeekDay = value;
		return;
	}
	throw "Invalid input format";
}

string User::getBeginTime() {
	return beginTime;
}

void User::setBeginTime(string value) {
	if (value[0] > '2'   || value[0] < '0'  ||
		(value[0] == '2' && value[1] > '3') ||		// Checks if hour is > 23
		value[1] > '9'   || value[1] < '0'  ||
		value[2] != ':'  ||
		value[3] > '5'   || value[3] < '0'  ||
		value[4] > '9'   || value[4] < '0') {
		throw "Invalid input format";
	}
	beginTime = value;
}

string User::getEndTime() {
	return endTime;
}

void User::setEndTime(string value) {
	if (value[0] > '2'   || value[0] < '0'  ||
		(value[0] == '2' && value[1] > '3') ||		// Checks if hour is > 23
		value[1] > '9'   || value[1] < '0'  ||
		value[2] != ':'  ||
		value[3] > '5'   || value[3] < '0'  ||
		value[4] > '9'   || value[4] < '0') {
		throw "Invalid input format";
	}
	endTime = value;
}