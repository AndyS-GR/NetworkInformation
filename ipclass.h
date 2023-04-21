#ifndef _IPCLASS_H_
#define _IPCLASS_H_

#include <iostream>

using namespace std;

class IpClass {
    private: int* IP = new int[4];
    private: int* MASK = new int[4];
    
    IpClass(int current_ip[4], int current_mask[4]){
        for (int i = 0; i < 4; i++){
            this->IP[i] = current_ip[i];
            this->MASK[i] = current_mask[i];
        }
    }

    void getIpNetwork(){
        
    }

    
};


#endif