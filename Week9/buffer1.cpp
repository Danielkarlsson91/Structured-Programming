#include <iostream>
#include <cassert>

template <typename T, int N>
class CircularBuffer
{
private:
    T buffer[N];
    int head;
    int tail;
    int count;

public:
    CircularBuffer() : head(0), tail(0), count(0)
    {
        static_assert(N >= 4, "Buffer length must be at least 4");
    }

    void clear()
    {
        head = tail = count = 0;
    }

    bool isEmpty() const
    {
        return count == 0;
    }

    bool isFull() const
    {
        return count == N;
    }

    void write(const T &item)
    {
        if (isFull())
        {
            // Overwrite the oldest data
            head = (head + 1) % N;
        }
        else
        {
            count++;
        }
        buffer[tail] = item;
        tail = (tail + 1) % N;
    }

    T read()
    {
        assert(!isEmpty());
        T data = buffer[head];
        head = (head + 1) % N;
        count--;
        return data;
    }

    int getCount() const
    {
        return count;
    }

    friend std::ostream &operator<<(std::ostream &os, const CircularBuffer &cb)
    {
        for (int i = cb.head, n = 0; n < cb.count; ++n, i = (i + 1) % N)
        {
            os << cb.buffer[i] << " ";
        }
        return os;
    }
};

int main()
{
    CircularBuffer<int, 5> buffer;

    assert(buffer.isEmpty());

    buffer.write(1);
    buffer.write(2);
    buffer.write(3);
    buffer.write(4);

    std::cout << "Buffer after writing 4 elements: " << buffer << std::endl;

    buffer.write(5);
    buffer.write(6);
    buffer.write(7);

    std::cout << "Buffer after writing 3 more elements (overwriting oldest): " << buffer << std::endl;

    assert(buffer.isFull());
    assert(buffer.getCount() == 5);

    buffer.clear();
    assert(buffer.isEmpty());

    return 0;
}