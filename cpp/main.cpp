#include <iostream>
#include "Gun.h"

int main()
{
   Gun beretta("Beretta", 10);

   std::cout << beretta << std::endl;

   // beretta.reload();
   beretta.prepare();

   try
   {
      beretta.shoot();
   }
   // catch(...)
   catch(NotReady exc)
   {
      std::cout << "Gun is not ready... preparing..." << std::endl;
      beretta.prepare();
      beretta.shoot();
   }
   catch(OutOfRounds exc)
   {
      std::cout << "Gun is out of rounds... reloading..." << std::endl;
      beretta.reload();
      beretta.shoot();
   }

   std::cout << beretta << std::endl;

   return 0;
}
