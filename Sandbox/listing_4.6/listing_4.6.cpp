#include <future>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

int find_the_answer_to_ltuae()
{
    for(int i = 0; i < 1000; i++) {
        if(i % 2 == 0) {
            std::cout << "/";
        }
        else {
            std::cout << "\\";
        }
    }

    return 42;
}

void do_other_stuff()
{
    const std::string data[] = {"ab", "cd", "ef", "gh", "ij", "kl", "mn", "op", "qr", "st", "uv", "wx", "yz"};

    for(const auto& l : data) {
        std::this_thread::sleep_for(500ms);
        std::cout << l << "\n";
    }
}

int main()
{
    std::future<int> the_answer = std::async(find_the_answer_to_ltuae);
    do_other_stuff();
    std::cout << "The answer is " << the_answer.get() << "\n";
}
