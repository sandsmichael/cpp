
#include "ETL.h"

#include <vector>
#include <stdlib.h>
#include <cmath>
#include "C:\dev\_external\boost-algorithm\include\boost\algorithm\string\"




std::vector<std::vector<std::string>> ETL::readCSV(){

    std::ifstream file(dataset);
    std::vector<std::vector<std::string>> dataString;

    std::string line = "";

    while(getline(file, line)){
        std::vector<std::string> vec;

    }

}