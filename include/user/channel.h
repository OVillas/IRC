#ifndef CHANNEL_H
#define CHANNEL_H

#include <string>
#include <vector>
#include "user.h"

using namespace std;

class Channel
{
private:
    string name;
    string topic;
    vector<User> users;
    vector<User> bannedUsers;
    vector<User> operators;
    vector<User> mutedUsers;
    vector<User> invitedUsers;
    vector<pair<User, int>> userPermissions;

public:
    Channel(const string& name);

    const string& getName() const;
    const vector<User>& getUsers() const;
    const string& getTopic() const;

    bool removeUser(const User& user);
    bool hasUser(const User& user) const;
    bool addUser(const User& user);
    bool isBanned(const User& user) const;
    bool isOperator(const User& user) const;
    bool isInvited(const User& user) const;
    bool isMuted(const User& user) const;

    void setTopic(const User& setter, const std::string& topic);
    void sendMessage(const User& sender, const std::string& message);
    void banUser(const User& banner, const User& target);
    void unbanUser(const User& banner, const User& target);
    void setOperator(const User& setter, const User& target);
    void removeOperator(const User& setter, const User& target);
    void muteUser(const User& muter, const User& target);
    void unmuteUser(const User& muter, const User& target);
    void inviteUser(const User& inviter, const User& target);
    void revokeInvite(const User& revoker, const User& target);
    void setPermissions(const User& setter, const User& target, int permissions);
    void changeNome(const User& changer, const string& newName);

    int getPermissions(const User& user) const;

    vector<User> listUsers() const;
};

Channel::Channel(const string& name)
{
    this->name = name;
}

const string& Channel::getName() const
{
    return name;
}

const vector<User>& Channel::getUsers() const
{
    return users;
}

const string& Channel::getTopic() const
{
    return topic;
}

bool Channel::hasUser(const User& user) const
{
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].getNick() == user.getNick())
        {
            return true;
        }
    }
    return false;
}

#endif