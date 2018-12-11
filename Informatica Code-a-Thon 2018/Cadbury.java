import java.util.*;
class CandidateCode 
{ 

	static int  finalCount=0;
   
    private static int calcualteCount(int count, int len,  int bre) {
			if(len > bre){
 			if(len - bre >= 0 && len > 0 && bre > 0){
 				count = calcualteCount(count, (len - bre) , bre);
 				count = count+1;
 			}else{
 				return count;
 			}
 			
 		}else{
 			if(bre - len >= 0 && bre > 0 && len > 0){
 				count = calcualteCount(count, len, (bre - len));
 				count = count+1;
 			}else{
 				return count;
 			}
 			
 		}
		return count;
        
		
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        int input1 = sc.nextInt();
        int input2 = sc.nextInt();
        int input3 = sc.nextInt();
        int input4 = sc.nextInt();

         ArrayList<String> boxDimensions = new ArrayList<String>();
         ArrayList<String> length = new ArrayList<String>();
         ArrayList<String> breadth = new ArrayList<String>();
         length.add(String.valueOf(input1));
         length.add(String.valueOf(input2));
         breadth.add(String.valueOf(input3));
         breadth.add(String.valueOf(input4));
         
         for (String len : length) {
             for (String bre : breadth) {
                 boxDimensions.add(len+"-"+bre);
             }
         }
         
         for (String boxDim : boxDimensions) {
             int count = 0;
             String[] dim = boxDim.split("-");
             if(boxDim != null){
             Integer len = Integer.valueOf(dim[0]);
             Integer bre = Integer.valueOf(dim [1]);
             count = calcualteCount(count, len, bre);
             finalCount = finalCount+count;
             }
         }
         
         System.out.println(finalCount);
    }
}