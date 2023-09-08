/** Código em desenvolvimento, será a conexão do cliente para o servidor de mensagens**/

#include <iostream>
#include <thread>
#include <mutex>
#include <arpa/inet.h>
#include <csignal>
#include "include/irc_client.h"

using namespace std;

int clientSocket;

Client::Client(string name, string password) : name(name), password(password) {}

void Client::setName(string name) {
    if (!name.empty()) {
        this->name = name;
    }
}

string Client::getName() {
    return this->name;
}

void Client::setPassword(string password) {
    if (!password.empty()) {
        this->password = password;
    }
}

string Client::getPassword() {
    return this->password;
}

void Client::receiverMessages() {
    char buffer[4096];
    while (true) {
        
    }
}

