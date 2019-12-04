#pragma once
#include<string>

class User {
public:
	//name, username, password
	User(const std::string&, const std::string&, const std::string&);
	virtual ~User();

	const std::string& GetName() const;
	const std::string& GetPassword() const;
	const std::string& GetUsername() const;

private:
	std::string fullName;
	std::string password;
	std::string username;

	int clearance;
	bool hasclearance = false;
};
