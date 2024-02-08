//Exercise 19

#ifndef QUEUE_H
#define QUEUE_H

#include <new>
#include <cstddef>

template <typename T>
class Queue {
  // Forward declaration of the node_t struct
  struct node_t;

  node_t *head{nullptr};
  node_t *tail{nullptr};
  size_t elems_num{0};

public:
  Queue() = default;
  Queue(const Queue &) = delete;
  Queue &operator=(const Queue &) = delete;

  // Function to enqueue a value
  bool enqueue(const T &value) {
    bool status{false};
    node_t *node = new (std::nothrow) node_t{value, nullptr};

    if (node != nullptr) {
      if (tail == nullptr) {
        head = node;
        tail = head;
      } else {
        tail->next = node;
        tail = node;
      }
      status = true;
      elems_num++;
    }

    return status;
  }

  // Function to dequeue a value
  bool dequeue(T &value) {
    bool status{false};

    if (head != nullptr) {
      status = true;
      value = head->data;

      node_t *temp{head};
      head = head->next;
      delete temp;
      elems_num--;

      if (head == nullptr) {
        tail = nullptr;
      }
    }
    return status;
  }

  // Function to get the number of elements in the queue
  size_t available() { return elems_num; }

  // Function to clear the queue
  void clear() {
    while (head != nullptr) {
      node_t *temp{head};
      head = head->next;
      delete temp;
    }

    elems_num = 0;
    tail = head;
  }

  // Destructor to clear the queue during object destruction
  ~Queue() { clear(); }

private:
  // Definition of the node_t struct
  struct node_t {
    T data;
    node_t *next;

    node_t(const T &value, node_t *ptr) : data{value}, next{ptr} {}
  };
};

#endif