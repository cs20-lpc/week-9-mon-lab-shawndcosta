#include <iostream>
#include "LinkedQueue.hpp"  

int main() {
    LinkedQueue<int> q;

    std::cout << "Is queue empty: "; 
    if(q.isEmpty()){
        std::cout << "yes" << std::endl;
    }else{
        std::cout<< "no" << std::endl;
    }
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    std::cout << q.getLength() << " elements added: " << std::endl;
    std::cout << "length: " << q.getLength() << std::endl;
    std::cout << "first elem: " << q.front() << std::endl;
    std::cout << "last elem: " << q.back() << std::endl;


    std::cout << "Is queue empty: "; 
    if(q.isEmpty()){
        std::cout << "yes" << std::endl;
    }else{
        std::cout<< "no" << std::endl;
    }


    q.dequeue();
    std::cout << "length: " << q.getLength() << std::endl;
    std::cout << "first elem: " << q.front() << std::endl;

    q.clear();
    std::cout << "queue cleared." << std::endl;
    std::cout << "Is queue empty ";
    if(q.isEmpty()){
        std::cout << "yes" << std::endl;
    }else{
        std::cout<< "no" << std::endl;
    }
    q.enqueue(100);
    q.enqueue(200);

    LinkedQueue<int> q2(q); 
    std::cout << "copied queue: " << q2.getLength() << std::endl;
    
    LinkedQueue<int> q3;
    q3 = q;
    std::cout << "Assigned queue length: " << q3.getLength() << std::endl;
    std::cout << "Assigned queue back: " << q3.back() << std::endl;
   
    return 0;
}
