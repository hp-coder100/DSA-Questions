import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
class Test {
    
    // public static int[] prodDilivery(int[] orderId){
    //     int[] answer = new int[orderId.length];
    //     for(int i=0;i<orderId.length; i++){
    //         int temp = orderId[i];
    //         int sum =0;
    //         while(temp > 0){
    //             sum += temp % 10;
    //             temp /=10;
    //         }
    //         answer[i] = sum;
    //     }
    //     return answer;
    // }
    
    // public static int[] freqSort(int[] listEle){
    //     int[] answer = new int[listEle.length];
    //     ArrayList<Integer> list = new ArrayList<>();
    //     for(Integer a:listEle)
    //         list.add(a);


    //     int n = listEle.length;
    //     final HashMap<Integer, Integer> mapCount
    //         = new HashMap<Integer, Integer>();
    //     final HashMap<Integer, Integer> mapIndex
    //         = new HashMap<Integer, Integer>();
    //     for (int i = 0; i < n; i++) {
    //         if (mapCount.containsKey(listEle[i])) {
    //             mapCount.put(listEle[i],
    //                          mapCount.get(listEle[i]) + 1);
    //         }
    //         else {
    //             mapCount.put(listEle[i],1); 
    //             mapIndex.put(listEle[i],i); 
    //         }
    //     }
 
    //     Collections.sort(list, new Comparator<Integer>() {
    //         public int compare(Integer n1, Integer n2)
    //         {
    //             int freq1 = mapCount.get(n1);
    //             int freq2 = mapCount.get(n2);
    //             if (freq1 != freq2) {
    //                 return freq2 - freq1;
    //             }
    //             else {
    //                 return mapIndex.get(n1)
    //                     - mapIndex.get(
    //                         n2); 
    //             }
    //         }
    //     });
    //     for(int i=0;i<listEle.length; i++){
    //         answer[i] = list.get(i);
    //     }
    //     System.out.println(list);
    //     return answer;
    // }


    // public static int countCustomer(int[] bill){
    //     int answer = 0;
    //     for(int i=0;i<bill.length;i++){
    //         int temp = bill[i];
    //         if(temp >= 0){
    //         int sr = (int)Math.sqrt(temp);
    //         if((sr * sr) == temp)
    //             answer++;
    //         }   
    //     }
        
    //     return answer;
    // }

    // public static String[] dictWord(String textInput){
    //     ArrayList<String> ansList= new ArrayList<>();
    //     ArrayList<String> ansListNew= new ArrayList<>();
        
       
    //     String[] list = textInput.split(" ");
    //     for(int i=0;i<list.length;i++){
    //         if(ansList.contains(list[i])){
    //             if(!ansListNew.contains(list[i])){
    //                 ansListNew.add(list[i]);
    //             }
    //         }
    //         else{
    //             ansList.add(list[i]);
    //         }
    //     }
    //     String[] answer = new String[ansListNew.size()];
    //     int i=0;
    //     for(String a:ansListNew)
    //         answer[i++] = a;
    //     Arrays.sort(answer,
    //         String.CASE_INSENSITIVE_ORDER);
    //         System.out.println(ansListNew);
    //     return answer;
    // }
   
    // boolean check(string a, string b){

    // }

        public static boolean check(String s1, String s2){
            if(s1.length()!=s2.length())
                return false;
            char[] arr1 = s1.toCharArray();
            char[] arr2 = s2.toCharArray();
            for(int i=0;i<s1.length();i++){
                if(arr1[i]=='*' || arr2[i]=='*')
                    continue;
                if(arr1[i]!=arr2[i])
                    return false;
            }
            return true;
        }
    public static void main(String[] args) {
        List<String> inputByLine = new ArrayList<String>();
        try{
            // Creates an InputStream
            FileInputStream file = new FileInputStream("tests.txt");
            InputStreamReader isr = new InputStreamReader(file);
            BufferedReader br = new BufferedReader(isr);
            String line = "";
            while((line=br.readLine()) != null){
                inputByLine.add(line.toString());
            }
            String arr[] = new String[inputByLine.size()];
            int i = 0;
            for(String line2:inputByLine){
                arr[i++] = line2;
            }
            boolean ans = check(arr[0], arr[1]);
            if(ans){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }    

            isr.close();
        }  
        catch(IOException e){
            e.printStackTrace();
        } 
    
    }
}