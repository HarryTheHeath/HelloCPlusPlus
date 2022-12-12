#include <cstdio>
#include <ctime>
#include <string>

enum Seasons { Spring, Summer, Autumn, Winter, };

class Time {
    int year;
public:
    Time() { year = 2022;}
    void add_year() {year = 2022;}
    
    bool set_year(const int new_year)
    {
        if(new_year < 1990) return false;
        year = new_year;
        return true;
    }
    int get_year() const { return year; }
    
};

class print
{
public:
    static void print_int(const std::string& header, const int something)
    {
        printf("\n%s", header.c_str());
        printf("%d\n", something);
    }
};



/*int main(int argc, char* argv[])
{
    Seasons spring = Seasons::Spring;
    Seasons summer = Seasons::Summer;
    Seasons autumn = Seasons::Autumn;
    Seasons winter = Seasons::Winter;


    const char a = 'A';
    const char z = 'Z';
    constexpr int alpha_length = 'Z' - 'A'+1;
    char alphabet[alpha_length+1];
    int index = 0;


    for (char c = a; c <= z; ++c) {alphabet[index++] = c;}
    
    alphabet[index] = '\0';
    printf("%s", alphabet);

    Time time;
    time.set_year(1969);
    
    print print;
    print::print_int("Time:", time.get_year());
    time.add_year();
    print::print_int("Time:", time.get_year());

    return 0;

    
}*/

