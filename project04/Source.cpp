#include "Header.h"




// Part A
URL::URL(std::string U){
    url = U;
    scheme =   U.substr(0, 6);
    std::string newString = U.substr(8);
    std::string::size_type position = newString.find("/");
    author = U.substr(6, (position + 2));
    path = U.substr((position + 8));
}
std::string URL::getScheme()  {
    return scheme;
}
std::string URL::getAuthor()  {
    return author;
}
std::string URL::getPath()  {
    return path;
}
std::string URL::getURL() {
    return url;
}
// display URl
void displayURL( URL url)
{
    std::cout << "scheme : " << url.getScheme() << "\n";
    std::cout << "authority : " << url.getAuthor() << "\n";
    std::cout << "path : " << url.getPath() << "\n";
    std::cout << "URL : " << url.getURL() << "\n";
}


// Part B
 Image::Image(std::string name, std::string type, std::string _date, double _size, std::string _authorName, int _width, int _height, int _aperture, std::string _exposureTime, int _shutterSpeed, int _iso, bool _flash) {
	 
	 setFileName(name);
	 setImageType(type);
	 setDate( _date);
     setSize( _size);
	 setAuthorName( _authorName);
     setWidth( _width);
     setHeight(_height);
     setAperture( _aperture);
     setExposureTime(_exposureTime);
     setIso(_iso);
     setFlash( _flash);
}
 std::string Image::getFileName()const {
     return fileName;
 }
 void Image::setFileName(std::string name) {
     fileName = name; 
 }


 std::string Image::getImageType() const {
     return imageType;
 }
 void Image::setImageType(std::string type) {
     if (imageType == "PNG" || imageType == "GIF" || imageType == "JPEF") {
         imageType = type;
     }
     else {
         imageType = "Invalid Type";
     }
 }

 std::string Image::getDate() const {
     return date;
 }
 void Image::setDate(std::string _date) {
         date = _date;
 }

 double Image::getSize() const{
    
     return size;
 }
 void Image::setSize(double _size) {
     if (_size < 0) {
         std::cout << "Incorrect size, cannot be negative\n";
         return;
     }
     size = _size;
 }

 std::string Image::getAuthorName() const {
     return authorName;
 }
 void Image::setAuthorName(std::string _authorName) {
     authorName = _authorName;
 }

 int Image::getWidth() const {

     return width;
 }
 void Image::setWidth(int _width) {
     if (_width < 0) {
         std::cout << "Incorrect width, cannot be negative\n";
         return;
     }
     else {
         width = _width;
     }
 }

 int Image::getHeight() const {
     return height;
 }
 void Image::setHeight(int _height) {
     if (_height < 0) {
         std::cout << "Incorrect height, cannot be negative\n";
         return;
     }
     else {
         height = _height;
     }
     
 }

 int Image::getAperture() const {
     return aperture;
 }
 void Image::setAperture(int _aperture) {
     aperture = _aperture;
 }

 std::string Image::getExposureTime() const {
     return exposureTime;
 }
 void Image::setExposureTime(std::string _exposureTime) {
     exposureTime = _exposureTime;
 }

 int Image::getIso() const {
     return iso;
 }
 void Image::setIso(int _iso) {
     iso = _iso;
 }

 bool Image::getFlash() const {
     return flash;
 }
 void Image::setFlash(bool _flash) {
     flash = _flash;
 }

 void imageInformation(const Image &image) {
     std::cout << "File name : " << image.getFileName() << "\n";
     std::cout << "Image type : " << image.getImageType() << "\n";
     std::cout << "Date created : " << image.getDate() << "\n";
     std::cout << "Image size : " << image.getSize() << "\n";
     std::cout << "Author name : " << image.getAuthorName() << "\n";
     std::cout << "Dimension:  " << image.getWidth()<<" Width "<<image.getHeight()<<" Height " << "\n";
     std::cout << "Aperture size : f/" << image.getAperture() << "\n";
     std::cout << "Exposure time : 1/" << image.getExposureTime() << "\n";
     std::cout << "ISO value " << image.getIso() << "\n";
     if (image.getFlash()) {
         std::cout << "Flash enabled: Yes";
     }
     else {
         std::cout << "Flash enabled: No";
     }
 }



 // Part C
 Item::Item(std::string name, long id, double price, int quantity) {
     _name = name;
     _id = id;
     _price = price;
     _quantity = quantity;
 }
 std::string Item::getName() {
     return _name;
 }
 long Item::getId() {
     return _id;
 }
 double Item::getPrice() {
     return _price;
 }
 int Item::getQuantity() {
     return _quantity;
 }
 // products int store
Store::Store(): books{ "books", 1001, 17, 12 },coloredPencils{ "colored pencils", 1002, 2, 15 },coloringPaper{ "coloring papers", 1003, 1, 20 },markers{ "markers", 1004, 3, 50 },crayons{ "crayons", 1005, 3, 3 },staples{ "staples", 1006, 2, 7 }{}

// total items
int Store::getTotal() {
    return books.getQuantity() + coloredPencils.getQuantity() + coloringPaper.getQuantity() + markers.getQuantity() + crayons.getQuantity() + staples.getQuantity();
}

//store items 
void Store::storeValue() {
    std::cout<<"Store list's items : "<<"\n";
    std::cout << "Books : " <<books.getQuantity() << "\n";
    std::cout << "ColoredPencil : " << coloredPencils.getQuantity() << "\n";
    std::cout << "Maker :" << markers.getQuantity() << "\n";
    std::cout << "Coloring Paper : " << coloringPaper.getQuantity() << "\n";
    std::cout << "Crayons : " << crayons.getQuantity() << "\n";
    std::cout << "Staples : " << staples.getQuantity() << "\n"; 
    std::cout << "Price of all products: "<< books.getPrice() * books.getQuantity() + coloredPencils.getPrice() * coloredPencils.getQuantity() + coloringPaper.getPrice() * coloringPaper.getQuantity() + markers.getPrice() * markers.getQuantity() + crayons.getPrice() * crayons.getQuantity() + staples.getPrice() * staples.getQuantity()<<"$"<<"\n";
}


Order::Order(): books{ "books", 1001, 17, 0 }, coloredPencils{ "colored pencils", 1002, 2, 0 }, coloringPaper{ "coloring papers", 1003, 1, 0 }, markers{ "markers", 1004, 3, 0 }, crayons{ "crayons", 1005, 3, 0 }, staples{ "staples", 1006, 2, 0 }{}

void Order::add(std::string name) {
    if (name == books.getName()) {
        int totalBooks = books.getQuantity() + 1;
        books.update(totalBooks);
    }
    if (name == coloredPencils.getName()) {
        int totalColoredPencils = coloredPencils.getQuantity() + 1;
        coloredPencils.update(totalColoredPencils);
    }
    if (name == coloringPaper.getName()) {
        int totalColoringPapers = coloringPaper.getQuantity() + 1;
        coloringPaper.update(totalColoringPapers);
    }
    if (name == markers.getName()) {
        int totalMarkers = markers.getQuantity() + 1;
        markers.update(totalMarkers);
    }
    if (name == crayons.getName()) {
        int totalCrayons = crayons.getQuantity() + 1;
        crayons.update(totalCrayons);
    }
    if (name == staples.getName()) {
        int totalStaples = staples.getQuantity() + 1;
        staples.update(totalStaples);
    }
}

void Item::update(int number) {
    _quantity = number;
}


int Order::totalPrice() {
    return books.getPrice() * books.getQuantity() + coloredPencils.getPrice() * coloredPencils.getQuantity() + coloringPaper.getPrice() * coloringPaper.getQuantity() + markers.getPrice() * markers.getQuantity() + crayons.getPrice() * crayons.getQuantity() + staples.getPrice() * staples.getQuantity();
}

