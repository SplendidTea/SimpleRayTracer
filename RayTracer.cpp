#include "colour.hh"
#include "vec3.hh"
#include <cstdint>
#include <iostream>

int main()
{
  uint8_t imageHeight=255;
  uint8_t imageWidth=255;


  //Render
  std::cout << "P3\n" << imageWidth+1 << ' ' << imageHeight+1 << "\n255\n";
  
  for(int j=0; j<=imageHeight; j++)
  {
    std::clog<<"\rScanLines remaining: "<<(imageHeight-j)<<' '<<std::flush;
    for(int i= 0; i<= imageWidth; i++)
    {
      auto pixelColour=vec3(double(i)/(imageWidth), double(j)/(imageHeight),0);
      write_colour(std::cout, pixelColour);
    }
  }
}
