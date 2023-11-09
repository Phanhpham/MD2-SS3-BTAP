#include<stdio.h>
int main(){
float Toan, Van, Anh, S, average ;
printf("Nhap so diem Toan = ");
scanf("%f", &Toan );
printf("Nhap so diem Van = ");
scanf("%f" , &Van );
printf("Nhap so diem Anh = ");
scanf("%f" , &Anh );
average = ( Toan + Van + Anh )/3;
S =  Toan + Van + Anh ; 
printf("diem trung binh=%.2f" , average);
printf("tong cua ba mon=%.2f" ,S);

}