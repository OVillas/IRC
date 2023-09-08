#ifndef ADM_H
#define ADM_H
#include "irc_client.h"

class Administrator : public Client  {
private:
    int admLevel;

public:
    Administrator(string IP, string name, string nick, string password, int level)
        : Client(IP, name, nick, password), admLevel(level) {}
    
    Client banUser(Client c1) {
        return c1;
    }

};

#endif