/*
 * Program #5
 * Jiacheng Zhao
 * 922943778
 * Lnode.java
 * */

package com.company;

public class Lnode {
    protected Lnode next;
    private String common;
    private String move;

    Lnode() {
        this.next = null;
        this.move = null;
        this.common = null;

    }

    Lnode(String Common, String Move) // constructor
    {
        this.next = null;
        this.common = Common;
        this.move = Move;
    }

    public String getCommon() //get common function
    {
        return common;
    }

    public Lnode getNext() // get next one
    {
        return next;
    }

    public void setNext(Lnode next) // set next object
    {
        this.next = next;
    }

    public int display() //display name, number and time
    {
        System.out.println("{HISTORY BEHAVIOR: "+move+"}");

        System.out.println("for COMMON:"+common);
        return 1;
    }
}
