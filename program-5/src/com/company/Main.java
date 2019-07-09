/*
 * Program #5
 * Jiacheng Zhao
 * 922943778
 * Main.java
 * */

package com.company;
import java.util.Scanner;
import java.io.FileNotFoundException;
import java.io.*;

public class Main {
    protected static Scanner input = null;

    public static void main(String[] args) throws IOException{
	// write your code here
        input = new Scanner(System.in);

        Tree tree = new Tree();
        List lll = new List();

        tree.creatTxtFile("Data");
        /*read data into file*/
        try {
            tree.read_data();
        }
        catch (IOException e) {
            System.out.println(e.toString());
        }

        /*write in data [new insert]*/
        tree.loadInput();
        lll.insert("ALL","LOADING FROM DATA FILE");

        //display function called
        System.out.println(">--Here is all DECISION information--<");
        tree.display();

        //search function called
        System.out.println();
        System.out.println("->Enter COMMON want be search");
        String temp1 = new String();
        temp1 = input.nextLine();
        lll.insert(temp1,"Searched");
        if(tree.search(temp1))
            System.out.println("FIND!!");
        else
            System.out.println("No Find!!");

        //remove keyword function called
        System.out.println("->Enter COMMON want be REMOVE");
        String temp = new String();
        temp = input.next();
        lll.insert(temp,"Removed");
        tree.deleteKey(temp);

        //display function called again
        System.out.println(">---Here is DECISION LIST After REMOVE---<");
        tree.display();
        System.out.println("=====HERE is HISTORY you DID=====");
        lll.display();

    }
}
