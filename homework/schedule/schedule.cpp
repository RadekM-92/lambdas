#include "schedule.hpp"
#include <string>
#include <thread>

void schedule(std::function<void()> f, std::chrono::seconds t)
{
    std::this_thread::sleep_for(t);
    f();
}

void schedule(std::function<void(int x)> f, std::chrono::seconds t, int y)
{
    std::this_thread::sleep_for(t);
    f(y);
}

void schedule(std::function<void(std::string s, double d)> f, std::chrono::seconds t, std::string s_, double d_)
{
    std::this_thread::sleep_for(t);
    f(s_, d_);
}