#include <iostream>
#include "BankSystem.h"
#include "Client.h"

// Workers
// Clients

int main() {
     /*BankSystem* bankSystem = new BankSystem();
    bankSystem->clientLogin();
    //BankSystem::clientLogin();  // make this static?
    while(bankSystem->console());
    //while(system.console());
    return 0;*/
     
    BankSystem system = {};
    while(system.console()) ;
    return 0;
}
