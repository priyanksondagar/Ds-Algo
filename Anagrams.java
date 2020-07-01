/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ds;

/**
 *
 * @author i
 */
public class Anagrams 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        String a="cat";
        String b="acta";
        boolean isAnagram=false;
        boolean visited[]=new boolean[b.length()];
        if(a.length()==b.length())
        {
        for(int i=0;i<a.length();i++)
        {
            char c=a.charAt(i);
            for(int j=0;j<b.length();j++)
            {
                if(b.charAt(j)==c)
                {
                    isAnagram=true;
                    break;
                }
            }
            if(!isAnagram)
            {
                break;
            }
        }
        }
    
    if(isAnagram)
    {
        System.out.print("enagram\n");
    }
    else
    {
        System.out.print("not anagram");
    }
    }
}
    

    
    

