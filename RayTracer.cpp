#include <iostream>
#include <cstdint>

int main()
{
  //512 x 512 Image
  uint8_t imageWidth=255;
  uint8_t imageHeight=255;
  
  //Render
    std::cout << "P3\n" << imageWidth+1 << ' ' << imageHeight+1 << "\n255\n";
  
  for(int j=0; j<=imageHeight; j++)
  {
    for(int i=0; i<=imageWidth;i++){
      auto r = double(i)/ (imageWidth);
      auto g = double(j)/ (imageHeight);
      auto b=0.0;


      int ir=int(255.999*r);
      int ig=int(255.999*g);
      int ib=0;

      std::cout<<ir<<' '<<ig<<' '<<ib<<'\n';
    }
  }
}
