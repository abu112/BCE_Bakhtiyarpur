#include <stdio.h>

int main() {

    int n = 0;
    printf("Enter the number of elements to be inserted in the list: ");
    scanf("%d", &n);
    int arry[n];

    printf("Enter the elements followed by space or Enter: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arry[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-1); j++){
            if(arry[j] > arry[j+1]){
                int temp = arry[j+1];
                arry[j+1] = arry[j];
                arry[j] = temp;
            }
        }
    }
/* //To sort the array uncomment this function;
    for(int i = 0; i < n; i++){
        printf("%d ", arry[i]);
    }
*/

//To find the maximum, minimum value;
printf("Maximum is : %d", &arry[n-1]);
printf("Minimum is : %d", &arry[0]);



    return 0;
}
