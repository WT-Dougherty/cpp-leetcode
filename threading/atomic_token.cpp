#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>

void background_task(std::atomic_bool &stop_flag)
{
    while (!stop_flag)
    {
        std::cout << "Running Thread" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    std::cout << "Detached thread cleanly exiting...\n";
}

int main()
{
    std::atomic_bool stop_flag(false);

    // Start the thread, passing the stop flag
    std::thread t(background_task, std::ref(stop_flag));
    t.detach(); // Detach it so main doesn't wait on destruction

    std::cout << "Created new thread from main thread" << std::endl;

    // Allow time to print
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));

    // ... later on, from anywhere in the program ...
    stop_flag = true;
}
