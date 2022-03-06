// #include <json/value.h>
#include <iostream>
#include <fstream>
#include <string>

#include "json.hpp"

using namespace std;

void read () 
{

    std::ifstream myfile; 
    
    myfile.open("C:/dev/cpp/cpp/data/data.json");
    
    std::string mystring;


    if ( myfile.is_open() ) // always check whether the file is open
    { 
        cout << "[SUCCESS] File is open" << endl;

        std::cout << "******* A *******";

        std::cout << myfile.rdbuf(); 


        std::cout << "******* B *******";

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
        streambuf* rdbuf (streambuf* sb);

        std::streambuf *psbuf, *backup;

        std::ofstream filestr;

        std::cout << "[OUTPUT] file contents from stream buffer" << endl;

        filestr.open ("/Users/michaelsands/code/cpp/cpp/src/data.json"); // read contents of file into stream buffer

        backup = std::cout.rdbuf();     // back up cout's streambuf

        psbuf = filestr.rdbuf();        // get file's streambuf

        std::cout.rdbuf(psbuf);         // assign streambuf to cout

        std::cout << "[OUTPUT]";

        std::cout.rdbuf(backup);        // restore cout's original streambuf

        filestr.close();


        /*
        rdbuf() just returns a pointer to the underlying basic_streambuf object for the given [io]stream object.
        iostream classes are just wrappers around I/O buffers. The iostream itself doesn't do a whole lot… mainly, it the provides operator>> formatting operators. The buffer is provided by an object derived from basic_streambuf, which you can get and set using rdbuf().
        basic_streambuf is an abstract base with a number of virtual functions which are overridden to provide a uniform interface for reading/writing files, strings, etc. The function basic_ostream<…>::operator<<( basic_streambuf<…> ) is defined to keep reading through the buffer until the underlying data source is exhausted.
        */
    }

    else {

        cout << "[ERROR] File is not open" << endl;
    }

}


