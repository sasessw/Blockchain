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

class data_transfers{};


class Block{
public:
    Block(int index, string _before, data_transfers a) : dt(ctime(&now)), current(sha512(_before)),
                                        before(_before){};
private:
    data_transfers big_Data;
    string before;
    string current;
    char * dt;

};
#endif //BLOCKCHAIN_BLOCK_H
