#include "User.h"

User::User(const std::string& fullName, const std::string& password, const std::string& username): fullName(fullName), password(password), username(username)
{
}

User::~User()
{
}

const std::string& User::GetName() const
{
	return fullName;
}

const std::string& User::GetPassword() const
{
	return password;
}

const std::string& User::GetUsername() const
{
	return username;
}

/*
const int User::getClearanceLevel() const
{
	return clearance;
}

bool User::hasClearance(int level)
{
	if (clearance >= level) {
		return true;
	}
	else {
		return false;
	}
}
*/
