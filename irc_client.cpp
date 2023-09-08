/** Código em desenvolvimento, será a conexão do cliente para o servidor de mensagens**/

#include <iostream>
#include <thread>
#include <mutex>
#include <arpa/inet.h>
#include <csignal>
#include "include/irc_client.h"

using namespace std;

int clientSocket;

Client::Client(string IP, string name, string nick, string password) : 
    IP(IP), name(name), nick(nick), password(password) {}



void Client::setIP(string IP)
{
    this->IP = IP;
}

string Client::getIP()
{
    return IP;
}

void Client::setName(string name)
{
    this->name = name;
}

string Client::getName()
{
    return name;
}

void Client::setNick(string nick)
{
    this->nick = nick;
}

string Client::getNick()
{
    return nick;
}

void Client::setPassword(string password)
{
    this->password = password;
}

string Client::getPassword()
{
    return password;
}

/* void Client::receiverMessages() {
    char buffer[4096];
    while (true) {
        int bytesRead = recv(clientSocket, buffer, sizeof(buffer) - 1, 0);
    }
} */

int main(int argc, char **argv) {
    Client c1("192.168.0.1", "Carlos Lemos", "moles", "flamengo1981");
    cout << "IP do cliente " << c1.getName() << "=> "<< c1.getIP() << "\n";

    return 0;
}
