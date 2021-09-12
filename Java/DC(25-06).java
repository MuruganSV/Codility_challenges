/*
input:1234
output : 2 4 12 34 234 1234
in Python:
N = input().strip()
for size in range(1,len(N)+1):
    for ind in range(size,len(N)+1):
        val = int(N[ind-size:ind])
        if len(str(val)) == size and val%2==0:
            print(val,end=" ")
*/


import java.util.*;

class Hello{
    public static void main(String args[]){
      String val,val1="";
      int num=0;
      Scanner s = new Scanner(System.in);
      val = s.next();
      for(int i=1;i<=val.length();i++){
          for(int j=i;j<=val.length();j++){
              for(int k=j-i;k<j;k++){
                  val1 = val1+val.charAt(k);
              }
              num = Integer.parseInt(val1);
              if(Integer.toString(num).length() == i && num%2==0){
                  System.out.print(num+" ");
              }
              num = 0;
              val1="";
          }
      }
    }
}