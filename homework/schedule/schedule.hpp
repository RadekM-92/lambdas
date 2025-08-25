#pragma once

#include <chrono>
#include <functional>

void schedule(std::function<void()>, std::chrono::seconds);
void schedule(std::function<void(int)>, std::chrono::seconds, int);
void schedule(std::function<void(std::string, double)>, std::chrono::seconds, std::string, double);