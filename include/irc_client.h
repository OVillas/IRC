#ifndef CLIENT_H
#define CLIENT_H

using namespace std;

class Client {
private:
    string name;
    string password;

public:
    Client(string name, string password);

    void setName(string name);
    string getName();
    void setPassword(string password);
    string getPassword();
    void receiverMessages();
    void sendMessage();
    void signalHandler(int signal);
};

#endif