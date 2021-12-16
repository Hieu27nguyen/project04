// Header.h*
// PROJECT 4
// by Hieu Nguyen
//
#pragma once
#include <string>
#include <iostream>
// Part A
class URL {
	private:
		std::string url;
		std::string scheme;
		std::string author;
		std::string path;
	public:
		URL(std::string url);
		std::string getURL();
		std::string getScheme();
		std::string getAuthor();
		std::string getPath();
};
void displayURL( URL url); 

// Part B
class Image {
public:
	Image(std::string fileName, std::string imageType, std::string date, double size, std::string authorName, int width, int height, int aperture, std::string exposureTime, int shutterSpeed, int iso, bool flash);

	std::string getFileName()const;
	void setFileName(std::string fileName);

	std::string getImageType()const;
	void setImageType (std::string imageType);

	std::string getDate()const;
	void setDate(std::string date);

	double getSize()const;
	void setSize(double size);

	std::string getAuthorName() const;
	void setAuthorName(std::string authorName);

	int getWidth() const;
	void setWidth(int width);

	int getHeight()const;
	void setHeight(int heigh);

	int getAperture()const;
	void setAperture(int aperture);

	std::string getExposureTime() const;
	void setExposureTime(std::string exposureTime);

	int getIso()const;
	void setIso(int iso);

	bool getFlash()const;
	void setFlash(bool flash);

private:
	std::string fileName;
	std::string imageType;
	std::string date;
	double size;
	std::string authorName;
	int width;
	int height;
	int aperture;
	std::string exposureTime;
	int iso;
	bool flash;

};
void imageInformation(const Image &image);

// Part C
class Item {
private:
	std::string _name;
	int _quantity;
	double _price;
	long _id;
public:
	Item(std::string name, long id, double price, int quantity);
	std::string getName();
	long getId();
	double getPrice();
	int getQuantity();
	void update(int number);
};
class Store {
public:
	Store();
	int getTotal();
	void storeValue();
private:
	Item books;
	Item coloredPencils;
	Item coloringPaper;
	Item markers;
	Item crayons;
	Item staples;
};

class Order {
public:
	Order();
	void add(std::string name);
	int totalPrice();
private:
	Item books;
	Item coloredPencils;
	Item coloringPaper;
	Item markers;
	Item crayons;
	Item staples;
};