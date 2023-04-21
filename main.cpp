#include <iostream>
#include <chrono>
#include <cstring>
#include <math.h>

using namespace std;

// Creation of constants
chrono::_V2::system_clock::time_point START_TIME = chrono::high_resolution_clock::now(); // Start TIC

// Call to functions
void EndTime();
int* ConvertStringToAddress(char*);
string IntAddressToString(int*);

int main(int argc, char** argv){
    int *cip, *cmask;
    try {
        if (argc <= 2) {
            throw runtime_error("The amount  of input arguments must be 2 or more");    
        }
        try {
            cip = ConvertStringToAddress(argv[1]);
            cmask = ConvertStringToAddress(argv[2]);
        } 
        catch (exception excp){
            cout << "Error: The numbers are incorrect!" << endl;
        }
    }
    catch (exception e) {
        cout << "Error: The input arguments are not correct" << endl;
    }
    EndTime();
}

void EndTime(){
        // Define the TOC to measure the execution time
    auto time_toc =  chrono::high_resolution_clock::now();

    cout << "\n-------- Execution time --------\n" << 
    "\tTime: " << chrono::duration_cast<chrono::microseconds>(time_toc - START_TIME).count() / pow(10, 6) << endl;
};
int* ConvertStringToAddress(char *address){
    int count_elemnts = 1;
    int *ip = new int[4];
    
    for(char *add = address; *add; add++){
        if (*add == '.')
            count_elemnts++;
    }

    if (count_elemnts != 4)
        throw runtime_error("The IP is structures for 4 numbers");
    
    try {
        char *element = strtok(address, ".");
        for (int i = 0; element !=  NULL || i < 3; i++) {
            ip[i] = stoi(element);
            element = strtok(NULL, ".");
        }
    }
    catch (exception e) {
        cout << "The IP numbers are incorrect" << endl;
        return 0;
    }

    // cout << "*IP:\t" << *ip << endl;
    // cout << "IP:\t" << ip << endl;
    // cout << "&IP:\t" << &ip << endl;

    return ip;
};
string IntAddressToString(int *address){
    string ip_str = "";
    for (int i = 0; i < 4; i++){
        //cout << *element << ".";
        ip_str += to_string(address[i]);
        if(i < 3)
            ip_str += ".";
    }
    return ip_str;
}


