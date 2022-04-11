#include <iostream>
#include <fstream>
#include <string>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

std::string fp = "C:/dev/cplusplus/cplusplus/io/premier_league_2021_partial.json";
//myfile.open("/Users/michaelsands/code/cpp/cpp/io/premier_league_2021.json");

/*
rdbuf() just returns a pointer to the underlying basic_streambuf object for the given [io]stream object.
iostream classes are just wrappers around I/O buffers. The iostream itself doesn't do a whole lot… mainly, it the provides operator>> formatting operators. The buffer is provided by an object derived from basic_streambuf, which you can get and set using rdbuf().
basic_streambuf is an abstract base with a number of virtual functions which are overridden to provide a uniform interface for reading/writing files, strings, etc. The function basic_ostream<…>::operator<<( basic_streambuf<…> ) is defined to keep reading through the buffer until the underlying data source is exhausted.
*/


void read_simple()
{
    cout << "[STATUS] Read Simple & Print" << endl;

    std::ifstream myfile;

    myfile.open(fp);

    std::string mystring;

    if (myfile.is_open()) 
    {
        cout << "[SUCCESS] File is open" << endl;

        std::string jsonstr;

        std::cout << myfile.rdbuf();

    }

    else {

        cout << "[ERROR] File is not open" << endl;
    }

}


void read_with_buffer_pointers() 
{
    cout << "[STATUS] Read with Buffer Pointers" << endl;

    std::ifstream myfile;

    myfile.open(fp);

    streambuf* rdbuf(streambuf * sb);

    std::streambuf* psbuf = nullptr, * backup = nullptr;

    cout << "Using pointers" << endl;

    psbuf = myfile.rdbuf();

    std::cout << psbuf;

}



void read_with_json_package()
{
    std::ifstream i(fp);
    json j;
    i >> j;

    //std::cout << j.dump(9) << std::endl;

    void read_by_iteration();
    {
        for (json::iterator it = j.begin(); it != j.end(); ++it) {
            std::cout << *it << '\n';
        }
    }

    void pretty_print_to_file();
    {
        // write prettified JSON to another file
        //std::ofstream o("pretty.json");
        //o << std::setw(4) << j << std::endl;
    };

    // retreive elements by value | TODO
    const auto tmp = j["matches"][0].get<std::string>();
    std::cout << tmp << std::endl;


}

void read_complex() 
{
    cout << "[STATUS] Read complex" << endl;

    // pointers
     // pointer pointer_obj;
     // // <or>
     // *pointer_obj;

     // char* gptr(); //Returns a pointer to the current element of the controlled input sequence (i.e., the "get pointer").

     // /* 
     // The first form (1) returns a pointer to the stream buffer object currently associated with the stream.
     // */
     // streambuf* rdbuf();

     // pointer_obj << rdbuf();

     // std::cout << "[OUTPUT] Pointer" << endl;
     // std::cout << pointer_obj  << endl;


    /*
    (2) also sets the object pointed by sb as the stream buffer associated with the stream and clears the error state flags.
    */

    /*

    streambuf* rdbuf(streambuf * sb);

    std::streambuf* psbuf, * backup;

    std::ofstream filestr;

    std::cout << "[OUTPUT] file contents from stream buffer" << endl;

    filestr.open("/Users/michaelsands/code/cpp/cpp/src/data.json"); // read contents of file into stream buffer

    backup = std::cout.rdbuf();     // back up cout's streambuf

    psbuf = filestr.rdbuf();        // get file's streambuf

    std::cout.rdbuf(psbuf);         // assign streambuf to cout

    std::cout << "[OUTPUT]";

    std::cout.rdbuf(backup);        // restore cout's original streambuf

    filestr.close();

    */

}




