//
// Created by gerdon on 07.11.17.
//

#ifndef BLOCKCHAIN_CHAIN_H
#define BLOCKCHAIN_CHAIN_H

#include "block.h"

class Chain{
public:
    Chain(){

    }


    size_t length;
    Block genesis_a;
};

#endif //BLOCKCHAIN_CHAIN_H
