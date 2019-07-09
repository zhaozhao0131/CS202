/*
 * Program #5
 * Jiacheng Zhao
 * 922943778
 * List.java
 * */

package com.company;

public class List {
    protected Lnode head;

    List()
    {
        this.head = null;
    }

    public int insert(String Common,String Move) // insert wrapper function
    {
        head = insert(head, Common, Move);
        return 1;
    }
    private Lnode insert(Lnode head, String Common, String Move) //insert node function in LLL
    {
        if(head == null)
        {
            Lnode temp = new Lnode(Common,Move);
            temp.setNext(null);
            return temp;
        }
        else
        {
            head.setNext(insert(head.getNext(), Common,Move));
            return head;
        }
    }
    public int display() // display wrapper function
    {
        return display(head);
    }

    private int display(Lnode head) // display all node in LLL
    {
        if(head == null)
            return 0;
        head.display();
        return display(head.getNext());
    }

    public void remove(String Common) //remove LLL function
    {
        head = null;
    }
}
