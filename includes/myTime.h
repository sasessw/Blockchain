//
// Created by gerdon on 22.11.17.
//

#ifndef BLOCKCHAIN_MYTIME_H
#define BLOCKCHAIN_MYTIME_H

#include "boost/date_time.hpp"
#include <string>




class myTime{
public:
    myTime(){
            now = boost::posix_time::microsec_clock::universal_time();
    };
    
    boost::posix_time::ptime blocktime(){
        return now;
    };

    void get_Time(){
        std::cout <<"d: " << now.date() <<";"<< "h: "<< now.time_of_day().hours() << "; m: "<< now.time_of_day().minutes() <<"; s: " << now.time_of_day().seconds() << "; ms: " << now.time_of_day().total_microseconds() << ";" << std::endl;
    }

private:
    boost::posix_time::ptime now;
};


#endif //BLOCKCHAIN_MYTIME_H
