#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>

void background_task(std::atomic_bool &stop_flag)
{
    while (!stop_flag)
    {
        std::cout << "Running Thread" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
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

    // Allow time for thread to run
    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    std::cout << "Closing detached thread" << std::endl;
    stop_flag = true;

    std::this_thread::sleep_for(std::chrono::milliseconds(300));
    std::cout << "Exiting main thread" << std::endl;
}
