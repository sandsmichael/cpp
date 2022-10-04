#include <iostream>
#include <vector>

//using namespace std;

class stats
{

    private:
        std::vector<double> V;
        double mean, median, mode;

    public:
        stats(void); 
        void sort_vect(void);
        void run_stats(void);
        double get_mean(void);
        double get_median(void);
        double get_mode(void);

};


stats::stats(void)
{


}


void stats::sort_vect(void)
{

}


void stats::run_stats(void)
{


}


double stats::get_mean(void)
{
    return mean;
}


int main()
{

    stats my_stats;
    my_stats.sort_vect();
    my_stats.run_stats();
    std::cout << "Output: " << std::endl;
    std::cout << "Mean: " << my_stats.get_mean() << "Median: " << my_stats.get_median() << "Mode: " << my_stats.get_mode() << std::endl;

    return 0
}