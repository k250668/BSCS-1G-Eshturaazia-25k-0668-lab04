int main() {
     int size;
     printf("Choose a number corresponding to the size you want for you pizza :\n");
     printf("1.Big\n");
     printf("2.Medium\n");
     printf("3.small\n");
     scanf("%d",&size);
     switch(size){
         case 1:
         printf("big size\n");
         break;
         case 2:
         printf("medium size\n");
         break;
         case 3:
         printf("small size\n");
         break;
         default:
         printf("invalid size");

         
     }
    

    return 0;
}
