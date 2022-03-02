// #include <json/value.h>
#include <iostream>
#include <fstream>
#include <string>
#include "json.hpp"

using namespace std;

int main () 
{

    std::ifstream myfile; 
    
    myfile.open("/Users/michaelsands/code/cpp/cpp/src/data.json");
    
    std::string mystring;

    if ( myfile.is_open() ) { // always check whether the file is open
        cout << "[SUCCESS] File is open" << endl;

        std::cout << myfile.rdbuf();

        myfile >> mystring; // pipe file's content into stream

        cout << mystring; // pipe stream's content to standard output
    }

    // Json::Reader reader;
    // Json::Value root;
    
    // bool parseSuccess = reader.parse(json, root, false);

    // if (parseSuccess)
    // {
    //     const Json::Value resultValue = root["result"];
    //     cout << "Result is " << resultValue.asString() << "\n";
    // }

    // Json::StyledWriter styledWriter;
    // Json::FastWriter fastWriter;
    // Json::Value newValue;
    // newValue["result"] = "ok";

    // cout << styledWriter.write(newValue) << "\n";
    // cout << fastWriter.write(newValue) << "\n";

    // return 0;
}
