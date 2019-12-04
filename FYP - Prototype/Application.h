#pragma once
#include <fstream>
#include <sstream>
#include <iomanip>

#include"List.h"
#include"User.h"


class Application {
public:
	Application();
	~Application();

	void Load(Application& app);
	void Save(Application& app);

	void AddNewUser(User*);

	void LogIn(User*);
	void LogInDefaultUser();
	void logOut();

	const int GetLength() const;
	User* GetCurrentUser();
	User* GetUser(int&) const;
	void DeleteUser(User*);
	List<User*> GetUsers() const;

	bool IsUserLoggedIn();
	const int GetUsersLength() const;
private:
	List<User*> Users;

	User* currentUser;
	User* User_;

	bool UserIsLoggedIn = false;
};