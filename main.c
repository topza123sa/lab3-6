#include <stdio.h>
int main(void)
{
  
  float  r, H, ans;     // ส่วนประกาศตัวแปร : จองหน่วยความจำไว้เก็บข้อมูล

  printf("Enter r : ");
  scanf("%d", &r);		 // รับค่าที่ต้องการ
    printf("Enter H: ");
  scanf("%d", &H);		 // รับค่าที่ต้องการ
  	 // รับค่าที่ต้องการ
  ans = (2*3.14*r)*H+2*(3.14*(r*r));		 // คำนวณ ตามสูตร
  printf("Answer is %f", ans); // แสดงผลลัพธ์ที่คำนวณได้
  return 0;
}