#pragma once
#include "Account.h"
using namespace std;

class Bank
{
private:
	list<Account*> users;
	int getUsersN();

	void services(Account&);
	void save(Account*);
	void save();
	bool upload();

public:
	Bank();
	~Bank();
	void launch();
	void addUser(Account*);
};
