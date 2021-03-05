/*Selection Sort divides the input list into two parts
1) Sorted Part
2) Un-Sorted Part
We'll make find largest (or smallest , depeding upon sorting order), and place it in it's position in Sorted Part
. We'll did this untill the whole list is sorted

Time Complexity: O(n^2)
 Space Complexity: O(1)
*/

public class Selection_Sort {
    public void print_list(int [] arr){
        for(int i : arr)
            System.out.print(i+ " ");
    }
   public void selection_sort(int [] arr){

        //N Times loop
        for(int i=0; i<arr.length; i++){
            int min_index = i;

            //Loop for Making Comparison
            for(int j=1; j<arr.length; j++ ){
                if(arr[j] <arr[i])
                    min_index = j;
            }
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }

public void main(String [] args){
    int [] arr = {2,8,6,5,3,9,1,7,19,15};
    print_list(arr);
    System.out.println("");
    selection_sort(arr);
    print_list(arr);
}
}