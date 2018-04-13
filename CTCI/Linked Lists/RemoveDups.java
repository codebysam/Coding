import java.util.Scanner;

class Node{
    int data;
    Node next;

    void display()
    {
        System.out.print(data+" ");
    }
}
class LinkedList{
    Node start;
    public LinkedList()
    {
        start = null;
    }

    void createLL()
    {
        Scanner sc = new Scanner(System.in);
        Node p = null,n;int x;
        do{
            n = new Node();
            System.out.print("Enter data >> ");
            n.data = sc.nextInt();
            if(start == null)
            {
                start = n;
                p = n;
            }
            else
            {
                p.next = n;
                p = n;
            }
            System.out.print("Add more? (0/1) >> ");
            x = sc.nextInt();
        }while(x!=0);
    }

    void displayLL()
    {
        System.out.println("The linked list is >> ");
        Node p = start;
        while(p!=null)
        {
            p.display();
            p = p.next;
        }
        System.out.println();
    }

    void removeDups()
    {
        Node p = start,q = null,r = null;
        while(p!=null)
        {
            r = p;
            q = p.next;
            while(q != null)
            {
                if(p.data == q.data)
                {
                    r.next = q.next;
                }
                else
                    r = q;  
                q = q.next;
            }
            p = p.next;
        }
    }
}

public class RemoveDups{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        LinkedList ll = new LinkedList();
        ll.createLL();
        ll.displayLL();
        ll.removeDups();
        System.out.println("After removing duplicates:");
        ll.displayLL();
    }
}