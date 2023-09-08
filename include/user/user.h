#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User
{
private:
    string IP;
    string name;
    string nick;
    string password;

public:
    User(string IP, string name, string nick, string password);

    void setIP(string IP);
    void setName(string name);
    void setNick(string nick);
    void setPassword(string password);

    string getIP();
    string getName();
    string getNick();
    string getPassword();
};

User::User(string IP, string name, string nick, string password)
{
    this->IP = IP;
    this->name = name;
    this->nick = nick;
    this->password = password;
}

void User::setIP(string IP)
{
    this->IP = IP;
}

string User::getIP()
{
    return IP;
}

void User::setName(string name)
{
    this->name = name;
}

string User::getName()
{
    return name;
}

void User::setNick(string nick)
{
    this->nick = nick;
}

string User::getNick()
{
    return nick;
}

void User::setPassword(string password)
{
    this->password = password;
}

string User::getPassword()
{
    return password;
}

#endif