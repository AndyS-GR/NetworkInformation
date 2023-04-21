#ifndef _MANAGERNETWORK_H_
#define _MANAGERNETWORK_H_

#include <iostream>
#include <cstring>

using namespace std;

class ManagerNetwork {
    private: string flags = {
        "-s"
        "-a",
        "-t"
        "--help"
    };
    private: string info_flags {
        "Show basic information"
        "Show all information about the network",
        "Show a table showing the operation to get the newtwork, hosts, and broadcast address",
        "Help information"
    };
    private: bool* active_flags;
    ManagerNetwork(){
        
    }

};

#endif
