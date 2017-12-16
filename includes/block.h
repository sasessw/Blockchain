//
// Created by gerdon on 01.11.17.
//

#ifndef BLOCKCHAIN_BLOCK_H
#define BLOCKCHAIN_BLOCK_H

using std::string;
using std::cout;
using std::endl;

#include <ctime>
#include "sha512.h"
#include <string>
#include "myTime.h"




class data_transfers{};




class Block{

public:
    Block() = delete;
    
    Block(int index, string _before) :  Index{index}, before(_before){
        dt;
        before = block_before->getSha();
        data_transfers a;
        big_Data{a};
    };

    string getSha(){
        return current;
    }
    
private:
    Block *block_before;
    data_transfers big_Data;
    string before;
    string current;
    myTime dt;
    int Index;

};
#endif //BLOCKCHAIN_BLOCK_H