#include "Application.h"

Application::Application()
{
}

Application::~Application()
{
}

void Application::Load(Application& app)
{
	std::ifstream infile("data.txt");
	std::string line;

	std::streampos previousLine;

	if (infile.is_open()) {
		//bool MianAccount = false;
		while (std::getline(infile, line)) {
			if (line == "User") {
				std::string Name;
				std::string Score;
				std::string username;
				std::string password;
				std::getline(infile, Name);
				std::getline(infile, Score);
				std::getline(infile, username);
				std::getline(infile, password);
				app.GetUsers().addInFront(new User(Name, password, username));
			}
		}
	}
	infile.close();
}

void Application::Save(Application& app)
{
	std::ofstream outfile("data.txt", std::ios::out);
	if (outfile.is_open()) {
		for (int i(0); i < app.GetUsersLength(); i++) {
			outfile << "User: " << std::endl;
			outfile << i << std::endl; //User ID
			outfile << app.User_->GetName(); //Name 
			outfile << "ACCOUNT DETAILS: " << std::endl;
			outfile << app.User_->GetUsername();
			outfile << app.User_->GetPassword();
		}
	}
	outfile.close();
}

void Application::AddNewUser(User* User)
{
	Users.addInFront(User);
}

void Application::LogIn(User* currentUser)
{
	this->currentUser = currentUser;
	UserIsLoggedIn = true;
}

void Application::LogInDefaultUser()
{
	std::string name = "DefaultUser", pw = "password", username = "DEFAULTuser1";

	User* DefaultUser = new User(name, pw, username);
	AddNewUser(DefaultUser);

	this->currentUser = DefaultUser;
	UserIsLoggedIn = true;
}

void Application::logOut()
{
	UserIsLoggedIn = false;
}

const int Application::GetLength() const
{
	return Users.length();
}

User* Application::GetCurrentUser()
{
	return currentUser;
}

User* Application::GetUser(int& index) const
{
	return Users[index];
}

void Application::DeleteUser(User* user)
{
	Users.deleteOne(user);
}

List<User*> Application::GetUsers() const
{
	return Users;
}

bool Application::IsUserLoggedIn()
{
	return UserIsLoggedIn;
}

const int Application::GetUsersLength() const
{
	return Users.length();
}