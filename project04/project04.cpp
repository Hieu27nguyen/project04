// Header.h*
// PROJECT 4
// by Hieu Nguyen
//

#include <iostream>
#include "Header.h"

int main()
{
    //URL 
    URL url{ "https://www.youtube.com/watch?v=cpSjuQ_ZJvY" };
    displayURL(url);
    std::cout << "\n";


    // Display image 
    Image image("Snow","JPEG","27-05-1997",500,"Hieu",50,10,8,"1/30", 45,2500,true );
    imageInformation(image);
    std::cout << "\n";      


    // Order Items
    std::cout << "\n";
    Store store;
    store.storeValue();
    
    Order order;
    order.add("books");
    order.add("books");
    order.add("books");
    order.add("books");
    order.add("books");
    order.add("books");

    std::cout << "Total price : " << order.totalPrice() << "$" << "\n";
}

