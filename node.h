template<class T> class BST;
template<class T> class Position;

template<class T>
class Node {
public:
	Node();
	Node(const T&);
	Node(const Node<T>&);
	virtual ~Node<T>() {}
	void setItem(const T&);
	T getItem() const {return item;}
	Node<T>& operator=(const Node<T>&);
	friend class BST<T>;
	friend class Position<T>;
private:
	Node<T> *leftPtr;
	Node<T> *rightPtr;
	Node<T> *parentPtr;
	T item;
};