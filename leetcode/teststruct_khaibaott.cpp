#include<stdio.h>

typedef struct {
  char Ten[30];
  int Namsinh;
  float DiemTB;
} HocVien; //HocVien sẽ là một kiểu dữ liệu mới

int main(){
  //gán giá trị cho mảng cấu trúc:
  HocVien DSHV[]={{"Minh", 1983, 8.5},{"VU",1922, 7}}; 
  printf ("%d",DSHV[0].Namsinh);
  return 0;
}
