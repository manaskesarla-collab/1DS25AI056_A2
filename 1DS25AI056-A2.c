#include <stdio.h>

int main() {
//----------------------------------------------------
//traversal 
    int arr[5]={2,9,3,5,6};
    for(int i=0;i<5;i++){    printf("%d ",arr[i]);   }
//----------------------------------------------------
//linear search
    int arr[5]={2,9,3,5,6};
    for(int i=0;i<5;i++){    printf("%d ",arr[i]);    }
    printf("\n");
    printf("Enter the number to find its index\n");
    int val;
    scanf("%d",&val);
    for(int i=0;i<5;i++){
        if(arr[i]==val){
            printf("%d found at the index %d",val,i);
            break;
        }
    }
//----------------------------------------------------
// min
    int arr[5]={2,9,3,5,6};
    int min=arr[0];
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
        min=(min<arr[i])?min:arr[i];
    }
    printf("\nThe minimum number in the array is %d",min);
//----------------------------------------------------
// max
    int arr[5]={2,9,3,5,6};
    int max=arr[0];
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
        max=(max>arr[i])?max:arr[i];
    }
    printf("\nThe maximum number in the array is %d",max);
//----------------------------------------------------
//insert in the begining
    int arr[6]={2,9,3,5,6};    
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
        printf("\n");

    int val;
    scanf("%d",&val);
    for(int i=5;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=val;    
    for(int i=0;i<6;i++){   printf("%d ",arr[i]);    }
//----------------------------------------------------
//insert in the given pos
    int arr[6]={2,9,3,5,6};    
    for(int i=0;i<5;i++){     printf("%d ",arr[i]);  }
    int val,pos;
    scanf("%d %d",&val,&pos);    
    printf("\n");    
    for(int i=5;i>pos;i--){   arr[i]=arr[i-1];   }
    arr[pos]=val;
    for(int i=0;i<6;i++){    printf("%d ",arr[i]);   }
//----------------------------------------------------
//insert at the end
    int arr[6]={2,9,3,5,6};
    for(int i=0;i<5;i++){   printf("%d ",arr[i]);  }
    printf("\n");
    int val;
    scanf("%d",&val);
    arr[5]=val;    
    for(int i=0;i<6;i++){    printf("%d ",arr[i]);    }
//----------------------------------------------------
//delete in the begining
    int arr[5]={2,9,3,5,6};
    for(int i=0;i<5;i++){    printf("%d ",arr[i]);   }
    printf("\n");
    for(int i=0;i<4;i++){       arr[i]=arr[i+1];    }
    arr[4]=0;
    for(int i=0;i<4;i++){     printf("%d ",arr[i]);    }
//----------------------------------------------------
//delete at the given pos
    int arr[5]={2,9,3,5,6};    
    for(int i=0;i<5;i++){   printf("%d ",arr[i]);   }
    printf("\n");
    int pos ;
    scanf("%d",&pos);    
    for(int i=pos;i<4;i++){      arr[i]=arr[i+1];   }
    arr[4]=0;
    for(int i=0;i<4;i++){  printf("%d ",arr[i]);   }
//----------------------------------------------------
//delete at the end
    int arr[5]={2,9,3,5,6};
    for(int i=0;i<5;i++){        printf("%d ",arr[i]);    }
    printf("\n");
    arr[4]=0;
    for(int i=0;i<4;i++){        printf("%d ",arr[i]);    }
//----------------------------------------------------
    return 0;

}
