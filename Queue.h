class Queue {
  public:
    Queue()
    : buf (new int [500]), back (0), front (0), count (0), max (500)
    {}
    Queue(int cap)
    : buf (new int [cap] ), back (0), front (0), count (0), max (cap)
    {}
    ~Queue()
    {
        delete [] buf;
	buf = nullptr;
    }
    void enqueue(int el)
    {
	count++;
        buf[back++] = el;
    }
    int dequeue()
    {
	--count;
        return buf[front++];
    }
    int peek()
    {
        return buf[front];
    }
    bool isEmpty()
    {
	return count == 0;
    }
    bool isFull()
    {
	return max == count;
    }
    void clear()
    {
        front = 0;
	back = 0;
	count = 0;
    }
  private:
    int * buf;
    int back;
    int front;
    int count;
    int max;
};
