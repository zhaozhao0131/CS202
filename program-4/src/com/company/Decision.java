/*
 * Program #4
 * Jiacheng Zhao
 * 922943778
 * Decision.java
 * */

package com.company;

public class Decision { //BASE Decision Class
    protected int data;
    protected String name;
    Decision()
    {
        name = null;
        data = 0;
    }
    Decision(int data, String name)
    {
        this.data = data;
        this.name = name;
    }
    public void display()
    {
        System.out.println("[Display Decision]");
        System.out.print("Here is detail: "+name+": ");
        if(data ==1)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }
}

class Des extends Decision{ //Derived Class
    Des(int data, String name)
    {
        this.data = data;
        this.name = name;
    }
    public void display()
    {
        System.out.println("[Display real Desision]");
        System.out.print("Here is detail: "+name+": ");
        if(data ==1)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }
}

class Chance extends Decision{ //Derived Class
    Chance(int data, String name)
    {
        this.data = data;
        this.name = name;
    }
    public void display()
    {
        System.out.println("[Display Chance]");
        System.out.print("Here is detail: "+name+": ");
        if(data ==1)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }
}

class End extends Decision{ //Derived Class
    End(int data, String name)
    {
        this.data = data;
        this.name = name;
    }
    public void display()
    {
        System.out.println("[Display End]");
        System.out.print("Here is detail: "+name+": ");
        if(data ==1)
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
    }
}

class Gift extends Decision{ //Derived Class
    Gift(int data, String name)
    {
        this.data = data;
        this.name = name;
    }
    public void display()
    {
        System.out.println("[Display Gift]");
        System.out.println("Here is detail: "+name);
    }
}
