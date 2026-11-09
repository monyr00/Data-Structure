
#include <iostream>
#include <stack>
#include <queue>


using namespace std;
int main()
{
    queue <int> MyQueue1;
    queue <int> MyQueue2;
    
    MyQueue1.push(10);
    MyQueue1.push(20);
    MyQueue1.push(30);
    MyQueue1.push(40);
    
    MyQueue2.push(50);
    MyQueue2.push(60);
    MyQueue2.push(70);
    MyQueue2.push(80);
    
    MyQueue1.swap(MyQueue2);
    
   
    cout << "myQueue1 = ";
    while (!MyQueue1.empty())
    {
        cout << MyQueue1.front() << " ";

        MyQueue1.pop();
    }


    cout << "myQueue2 = ";
    while (!MyQueue2.empty())
    {
        cout << MyQueue2.front() << " ";

        MyQueue2.pop();
    }

    

    system("pause>0");
    return 0;
}

