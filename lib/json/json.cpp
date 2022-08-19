#include <iostream>
#include <fstream>
#include <string>
#include "json.hpp"

#include <memory>

using namespace std;
using json = nlohmann::json;

std::string fp = "C:/dev/cpp/lib/json/premier_league.json";

void read_simple();
void read_with_stream_buffer();
string readFileIntoString(const string& fp);


int main() 
{
    // read_simple();

    // read_with_stream_buffer();

    string file_contents;
    file_contents = readFileIntoString(fp);
    // std::cout << file_contents << std::endl;

    json j_complete = json::parse(file_contents);
    // std::cout << std::setw(10) << j_complete << std::endl;
    std::cout << std::setw(10) << j_complete["rounds"]["matches"][0] << std::endl;




}


/*

 Json Processing Functions

*/

string readFileIntoString(const string& fp) {
    ifstream input_file(fp);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '" << fp << "'" << endl;
        exit(EXIT_FAILURE);
    }
    return string((std::istreambuf_iterator<char>(input_file)), std::istreambuf_iterator<char>());
}



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


void read_with_stream_buffer() 
{
    /*
    rdbuf() just returns a pointer to the underlying basic_streambuf object for the given [io]stream object.
    iostream classes are just wrappers around I/O buffers. The iostream itself doesn't do a whole lot� mainly, it the provides operator>> formatting operators. The buffer is provided by an object derived from basic_streambuf, which you can get and set using rdbuf().
    basic_streambuf is an abstract base with a number of virtual functions which are overridden to provide a uniform interface for reading/writing files, strings, etc. The function basic_ostream<�>::operator<<( basic_streambuf<�> ) is defined to keep reading through the buffer until the underlying data source is exhausted.
    */

    cout << "[STATUS] Read with Buffer Pointers" << endl;

    std::ifstream myfile;

    myfile.open(fp);

    streambuf* rdbuf(streambuf * sb);

    std::streambuf* psbuf = nullptr, * backup = nullptr;

    cout << "Using pointers" << endl;

    psbuf = myfile.rdbuf();

    std::cout << psbuf;

}

