class Queue {
  public:
    Queue();
    Queue(int cap);
    ~Queue();
    void enqueue(int el);
    int dequeue();
    int peek();
    bool isEmpty();
    void clear();
};
