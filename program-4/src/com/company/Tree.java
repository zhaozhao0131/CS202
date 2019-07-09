/*
 * Program #4
 * Jiacheng Zhao
 * 922943778
 * Tree.java
 * */

package com.company;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;


public class Tree {
    private Node root;
    protected static Scanner input = null;

    Tree()
    {
        root = null;
    }
    public static boolean creatTxtFile(String name) throws IOException //create new text file
    {
        boolean flag = false;
        String filenameTemp;
        filenameTemp = name + ".txt";
        File filename = new File(filenameTemp);
        if (!filename.exists()) {
            filename.createNewFile();
            flag = true;
        }
        return flag;
    }
    public int read_data() throws IOException //read in data file from outside //read data to text file
    {
        File infile = new File("Data.txt");
        Scanner sc = new Scanner(infile);
        System.out.println("-----------------------------------------------------------------------");
        System.out.println("[TYPE: 1- Decision] "+"[TYPE: 2- CHANCE] "+"[TYPE: 3- END] "+"[TYPE 4- GIFT]");
        System.out.println("[DECISION: 1- YES] "+"[DECISION: 2- NO]");
        while (sc.hasNextLine()) {
            String string = sc.nextLine();
            String[] parts = string.split(";");
            int flag = Integer.parseInt(parts[0]);
            int data = Integer.parseInt(parts[1]);
            String name = parts[2];

            System.out.println("TYPE: " + flag + " DECISION: " + data + " COMMOM: " + name);
            insert(flag, data, name);
        }
        System.out.println("-----------------------------------------------------------------------");
        sc.close();
        return 1;
    }

    public int loadInput() //read in data from user
    {
        int temp = 0;
        int temp1 = 0;
        String temp2 = new String();
        input = new Scanner(System.in);
        System.out.println("ENTER a new flag");
        temp = input.nextInt();
        System.out.println("ENTER a new decision");
        temp1 = input.nextInt();
        System.out.println("ENTER a comom");
        temp2 = input.next();
        insert(temp, temp1, temp2);

        return 1;
    }
        public boolean isEmpty() //IF Empty function
        {
            return root == null;
        }
        public void insert(int flag,int data,String name) //insert function
        {
            root = insert(root,flag,data,name);
        }

        private Node insert(Node root, int flag, int data,String name)
        {
            if (root == null)
                root = new Node(flag,data,name);
            else
            {
                if (root.getName().compareTo(name)>0)
                    root.left = insert(root.left, flag,data,name);
                else
                    root.right = insert(root.right, flag,data,name);
            }
            return root;
        }

       public void display() //display function
       {
           display(root);
       }
       private void display(Node root)
       {
            if(root == null)
                return;
            display(root.getLeft());
            root.display();
            display(root.getRight());
       }
        public boolean search(String name) //search function
        {
            return search(root, name);
        }
        public boolean search(Node root, String Name)
        {
            if (root == null)
                return false;
            if(root.getName().equals(Name))
                return true;
            if (root.getName().compareTo(Name) > 0)
                return search(root.left, Name);
                else
                return search(root.right, Name);
        }

        void deleteKey(String Name) //remove key function
        {
            root = delete(root, Name);
        }

        Node delete(Node root, String Name)
        {
            if (root == null) {
                System.out.println("Remove result: Can't Find");
                return root;
            }
            /* Otherwise, recur down the tree */
            if (root.getName().compareTo(Name)>0)
                root.left = delete(root.left, Name);
            else if (root.getName().compareTo(Name)<0)
            root.right = delete(root.right, Name);

            else
            {
                if (root.left == null)
                    return root.right;
                else if (root.right == null)
                return root.left;

                root.setName(minValue(root.right));

                root.right = delete(root.right, root.getName());
            }

            return root;
        }
        String minValue(Node root) //get min value function
        {
            String minv = root.getName();
            while (root.left != null)
            {
                minv = root.left.getName();
                root = root.left;
            }
            return minv;
        }
}

