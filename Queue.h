class Queue {
  public:
    Queue()
    : buf (new int [500]), back (0), front (0)
    {}
    Queue(int cap)
    : buf (new int [cap] ), back (0), front (0)
    {}
    ~Queue()
    {
        delete [] buf;
	buf = nullptr;
    }
    void enqueue(int el);
    int dequeue();
    int peek();
    bool isEmpty();
    void clear();
  private:
    int * buf;
    int back;
    int front;
};
