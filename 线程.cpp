#include <iostream>
#include <thread>
//

std::thread::id main_thread_id = std::this_thread::get_id();

void hello()  
{
    std::cout << "Hello Concurrent World\n";
    if (main_thread_id == std::this_thread::get_id())
        std::cout << "This is the main thread.\n";
    else
        std::cout << "This is not the main thread.\n";
}

void pause_thread(int n) {
    std::this_thread::sleep_for(std::chrono::seconds(n));
    std::cout << "pause of " << n << " seconds ended\n";
}

int main() {
    std::thread t(hello);
    std::cout << t.hardware_concurrency() << std::endl;//可以并发执行多少个(不准确)
    std::cout << "native_handle " << t.native_handle() << std::endl;//可以并发执行多少个(不准确)
    t.join();
    std::thread a(hello);
    a.detach();
    std::thread threads[5];                         // 默认构造线程

    std::cout << "Spawning 5 threads...\n";
    for (int i = 0; i < 5; ++i)
        threads[i] = std::thread(pause_thread, i + 1);   // move-assign threads
    std::cout << "Done spawning threads. Now waiting for them to join:\n";
    for (auto &thread : threads)
        thread.join();
    std::cout << "All threads joined!\n";
}
/*
join:   一个可结合的线程能够被其他线程回收资源和杀死，在被其他线程回收之前，它的存储器资源如栈，是不释放的
        这种关系下，主线程需要明确执行等待操作，在子线程结束后，主线程的等待操作执行完毕，子线程和主线程会合，
        这时主线程继续执行等待操作之后的下一步操作。
        必须执行会合操作，否则，系统永远不会主动销毁线程，分配给该线程的系统资源也永远不会释放。
detach: 一个分离的线程是不能被其他线程回收或杀死的，它的存储器资源在它终止时由系统自动释放
        分离线程没有被其他的线程所等待，自己运行结束了，线程也就终止了，马上释放系统资源。
*/