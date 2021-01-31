#include <graphics.h> 
  
int main() 
{ 
    // gm - bu kompyuter ekrani bo'lgan Grafika rejimi
     // piksel yordamida rasm hosil qiluvchi rejim.
     // DETECT - bu "graphics.h" sarlavha faylida aniqlangan yo'l 
    int gd = DETECT, gm; 
  
    // chap, yuqori, o'ng, pastki joylashuv 
    int left = 150, top = 150; 
    int right = 450, bottom = 450; 
  
    // initograf grafik tizimni ishga tushiradi 
    // diskdan grafik drayverni yuklash orqali 
    initgraph(&gd, &gm, ""); 
  
    // to'rtburchak funktsiyasi
    rectangle(left, top, right, bottom); 
  
    getch(); 
  
    // closegraph funktsiyasi grafikani yopadi
     // rejimi va ajratilgan barcha xotirani taqsimlaydi
     // grafik tizim orqali . 
    closegraph(); 
  
    return 0; 
} 