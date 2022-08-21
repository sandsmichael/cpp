#include <iostream>
#include <fstream>

int main()
{

    std::cout << "Reading .csv file" << std::endl;

    std::fstream fin;
    fin.open("C:/dev/cpp/lib/csv/mlb_teams_2012.csv", std::iostream::in);


}