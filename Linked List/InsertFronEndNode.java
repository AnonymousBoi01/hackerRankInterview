class GfG
{

// structure of a node
static class Node
{
	int data;
	Node next;
}

// function to get a new node
static Node getNode(int data)
{
	// allocate memory for the node
	Node newNode = new Node();

	// put in the data
	newNode.data = data;
	newNode.next = null;
	return newNode;
}

// function to insert a node after the
// nth node from the end
static void insertAfterNthNode(Node head, int n, int x)
{
	// if list is empty
	if (head == null)
		return;

	// get a new node for the value 'x'
	Node newNode = getNode(x);
	Node ptr = head;
	int len = 0, i;

	// find length of the list, i.e, the
	// number of nodes in the list
	while (ptr != null)
	{
		len++;
		ptr = ptr.next;
	}

	// traverse up to the nth node from the end
	ptr = head;
	for (i = 1; i <= (len - n); i++)
		ptr = ptr.next;

	// insert the 'newNode' by making the
	// necessary adjustment in the links
	newNode.next = ptr.next;
	ptr.next = newNode;
}

// function to print the list
static void printList(Node head)
{
	while (head != null)
	{
		System.out.print(head.data + " ");
		head = head.next;
	}
}

// Driver code
public static void main(String[] args)
{
	// Creating list 1->3->4->5
	Node head = getNode(1);
	head.next = getNode(3);
	head.next.next = getNode(4);
	head.next.next.next = getNode(5);

	int n = 4, x = 2;

	System.out.print("Original Linked List: ");
	printList(head);

	insertAfterNthNode(head, n, x);
	System.out.println();
	System.out.print("Linked List After Insertion: ");
	printList(head);
}
}
