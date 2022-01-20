#include <cstdio>

class ClockOfTheNow
{
    int year;
public:
    void add_year()
    {
        year++;
    }
    bool set_year(int new_year)
    {
        if(new_year < 2022) return false;
        year = new_year;
        return true;
    }
    int get_year()
    {
        return year;
    }
};


int main()
{
    ClockOfTheNow clock;
    if(!clock.set_year(2021))
    {
        clock.set_year(2022);
    }
    clock.add_year();
    printf("year: %d", clock.get_year());
};