#include "Client.h"
#include "BankSystem.h"
#include "Worker.h"
using namespace std;
#include <iostream>

WorkerData workerdata;

void Worker::createClient() {
    for (int i = 0; i < workerdata.clients.size(); i++) {
        cout << "enter your name: ";
        cin >> workerdata.clients.back().name;
        cout << endl;

        cout << "enter your family name : ";
        cin >> workerdata.clients.back().family_name;
        cout << endl;

        cout << "enter your mail: ";
        cin >> workerdata.clients.back().email;
        cout << endl;

        cout << "enter your age : ";
        cin >> workerdata.clients.back().age;
        cout << endl;

        cout << "enter your bank branch: ";
        cin >> workerdata.clients.back().branch;
        cout << endl;

        cout << "enter your id: ";
        cin >> workerdata.clients.back().id;
        cout << endl;

        cout << "enter your password: ";
        cin >> workerdata.clients.back().password;
        cout << endl;
    }
}


/*void Worker::remove() {
    for(int i = workerdata.clients.size(); workerdata.clients.size() - 1 ; i--){
        workerdata.clients.erase();
}

    void Worker::infoClient(); {
    for (int i = 0; i < workerdata.clients.size(); i++) {
        if(workerdata.clients[i].name == workerdata.clients[i].)
    }
}*/

/*void Worker::workerConsole() {

}*/