/*
 * Program #5
 * Jiacheng Zhao
 * 922943778
 * Node.java
 * */

package com.company;

public class Node { //Node Class
    private Decision de;
    Node left;
    Node right;
    Node() //Default Constructor
    {
        left = null;
        right = null;
        de = new Decision();
    }

    Node(int flag, int data, String name){ //Constructor
        if(flag == 1)
        {
            de = new Des(data,name);
        }
        if(flag == 2)
        {
            de = new Chance(data,name);
        }
        if(flag == 3)
        {
            de = new End(data,name);
        }
        if(flag == 4)
        {
            de = new Gift(data,name);
        }
        this.left = null;
        this.right = null;
    }
    public void setLeft(Node left){ //Set left
        this.left = left;
    }
    public void setRight(Node right){ //Set right
        this.right = right;
    }
    public Node getLeft() //Get left
    {
        return this.left;
    }
    public Node getRight() //Get right
    {
        return this.right;
    }
    public void display() //Display function
    {
        de.display();
    }
    public String getName() //get Name function
    {
        return de.name;
    }
    public int getData()
    {
        return de.data;
    }
    public void setName(String Name) //set Name function
    {
        this.de.name = Name;
    }
}


