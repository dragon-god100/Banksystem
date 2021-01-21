//
// Created by Lotus on 05/07/2020.
//

#ifndef BANKSYSTEM_CLIENT_H
#define BANKSYSTEM_CLIENT_H

#include <iostream>
#include <string>

struct ClientData {
    std::string name;
    std::string family_name;
    std::string email;
    int id;
    int age;
    int password;
    int branch;
    int total_money;
};


class Client {
public:
    // Client functions
    void __cdecl showInfo(ClientData& client);
    void _cdecl clientConsole(ClientData& client);
    void __cdecl additionalActions(ClientData& client);
    void __cdecl ribit(ClientData& client);
};


#endif //BANKSYSTEM_CLIENT_H
