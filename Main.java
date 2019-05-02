package com.company;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input_terminal = new Scanner( System.in );
        List<Integer> struct_data = new ArrayList<Integer>();

        for (int i = 0; true; i++) {
            System.out.print("To next input <ESC>!  To input new cell[ index = " + i + "] with value = ");
            String in = input_terminal.nextLine();

            try {
                if (in.matches("^-?[0-9]+$")) {
                        System.out.print( (struct_data.add(new Integer(in))? "OK" : "Error add number!"));
                }else if ( in.equalsIgnoreCase("esc") ){
                    break;
                }
            }catch ( NumberFormatException ex ){
                System.out.println("Error: " + ex );
            }
        }

        struct_data.sort( Integer::compareTo );

        struct_data.forEach( ( value ) -> {
                System.out.print( value + "  ");
            }
        );

    }
}
