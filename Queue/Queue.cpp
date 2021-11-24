/* Создайте класс Queue, хранящий целые числа в виде очереди.
Реализовать операции push (добавление в конец очереди) и front (взятие элемента из начала очереди).
Количество элементов очереди не ограничено.
*/

#include <iostream>
#include <vector>

using namespace std;

int length;
vector<int> vector1{ 0 };

class Queue {
public:

    //filling the queue with numbers
    void initialisation() {
        int element;
        cout << "How many elements do you want to add to the queue?" << endl;
        cin >> length;
        vector1.resize(length);
        cout << "Enter " << length << " elements:" << endl;
        for (int i = 0; i < length; i++) {
            cout << "Queue [" << i + 1 << "]: ";
            cin >> element;
            vector1.at(i) = element;
        }
    }

    //showing out the elements of the queue
    void output() {
        cout << "-------------------------------" << endl;
        cout << "Queue elements: " << endl;
        for (int i = 0; i < length; i++) {
            cout << "Queue[" << i + 1 << "] = " << vector1.at(i) << endl;
        }
    }

    //adding new element to the end of the queue
    vector<int> push() {
        cout << "-------------------------------" << endl;
        int newElement;
        cout << "Add new element to the queue..." << endl;
        cin >> newElement;
        length++;
        vector1.resize(length);
        vector1.at(length - 1) = newElement;
        output();
        return vector1;
    }

    //the output of the first queue element
    int front() {
        cout << "-------------------------------" << endl;
        cout << "The first queue element is:" << vector1.at(0) << endl;
        return vector1.at(0);
    }
};

int main()
{
    Queue queue1 = Queue();
    queue1.initialisation();
    queue1.output();
    queue1.push();
    queue1.front();
}