#ifndef CLIENT_H
#define CLIENT_H

using namespace std;

class Client {
private:
    string IP;
    string name;
    string nick;
    string password;

public:
    Client(string IP, string name, string nick,string password);

    void setIP(string IP);
    string getIP();
    void setName(string name);
    string getName();
    void setNick(string nick);
    string getNick();
    void setPassword(string password);
    string getPassword();
    void receiverMessages();
    void sendMessage();
    void signalHandler(int signal);
};

#endif