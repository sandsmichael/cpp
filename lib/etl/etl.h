// ETL of .csv file using cpp

#ifndef ETL_h
#define ETL_h

#include <iostream>
#include <fstream>
#include <C:\dev\_external\eigen-git-mirror\Eigen\Dense>


class ETL
{

    std::string dataset;
    std::string delimiter;
    bool header; 


    public:

        ETL(std::string data, std::string separator, bool head) : dataset(data), delimiter(separator), header(head)
        {
            
        }


};




#endif