#ifndef CHANNEL_H
#define CHANNEL_H

#include <string>
#include <vector>
#include "include/irc_client.h"
#include "include/irc_adm.h"

using namespace std;

class Channel
{
private:
    string name;
    string topic;
    vector<Client> users;
    vector<Client> bannedUsers;
    vector<Administrator> administrators;
    vector<Client> mutedUsers;
    vector<Client> invitedUsers;
    vector<Administrator> userPermissions;

public:
    Channel(const string& name);

    const string& getName() const;
    const vector<Client>& getUsers() const;
    const string& getTopic() const;

    bool removeUser(const Client& Client);
    bool hasUser(const Client& Client) const;
    bool addUser(const Client& Client);
    bool isBanned(const Client& Client) const;
    bool isOperator(const Client& Client) const;
    bool isInvited(const Client& Client) const;
    bool isMuted(const Client& Client) const;

    void setTopic(const Client& setter, const std::string& topic);
    void sendMessage(const Client& sender, const std::string& message);
    void banUser(const Client& banner, const Client& target);
    void unbanUser(const Client& banner, const Client& target);
    void setOperator(const Client& setter, const Client& target);
    void removeOperator(const Client& setter, const Client& target);
    void muteUser(const Client& muter, const Client& target);
    void unmuteUser(const Client& muter, const Client& target);
    void inviteUser(const Client& inviter, const Client& target);
    void revokeInvite(const Client& revoker, const Client& target);
    void setPermissions(const Client& setter, const Client& target, int permissions);
    void changeNome(const Client& changer, const string& newName);

    int getPermissions(const Client& Client) const;

    vector<Client> listUsers() const;
};

Channel::Channel(const string& name)
{
    this->name = name;
}

const string& Channel::getName() const
{
    return name;
}

const vector<Client>& Channel::getUsers() const
{
    return users;
}

const string& Channel::getTopic() const
{
    return topic;
}

bool Channel::hasUser(const Client& Client) const
{
   /*  for (int i = 0; i < users.size(); i++)
    {
        if (users[i].getNick() == Client.getNick())
        {
            return true;
        }
    }
    return false; */
}

#endif