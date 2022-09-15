#include <stdio.h> 
int sx_belon (int array_khachhang[], int length_khachhang){
    int i,j;
    int tg;
//    int length_khachhang = sizeof array_khachhang / sizeof(int);
  for( i = 0; i < length_khachhang-1; i++){
        for( j = i + 1; j < length_khachhang; j++){
            if(array_khachhang[i] > array_khachhang[j]){
                tg = array_khachhang[i];
                array_khachhang[i] = array_khachhang[j];
                array_khachhang[j] = tg;
            }
        }
    }
    return 0;
}
int xuly(int array_khachhang[],int max_khach, int length_khachhang){
    int time_later;
    int i;
  time_later=array_khachhang[max_khach-1]-1;
    for ( i = length_khachhang; i >1; i--)
    {
        if (time_later==array_khachhang[i])
        {
            time_later=time_later-1;
        }
    }
     printf("thoi gian de toi tre nhat  %d",time_later);
}
int main(){
    int array_khachhang[]={5,30,10,22,43,44,45,34,23,54};
    int array_xe[]={10,20,4};
    int maxchongoi=3;
    int max_khach;
    int time_later;
    int i;
    int j;
    int tg;
    int length_khachhang = sizeof array_khachhang / sizeof(int);
    // printf("%d",length_khachhang);
    int length_xe = sizeof array_xe / sizeof(int);
    // printf("%d",length_xe);
    max_khach = maxchongoi*length_xe;
    sx_belon(array_khachhang,length_khachhang);
    xuly(array_khachhang, max_khach, length_khachhang);
}