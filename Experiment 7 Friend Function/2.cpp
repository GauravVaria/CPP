// Write a program to calculate 20% discount on book price and display discounted price along with name of the book. 
// Declare two classes having name science and history. In both the classes, data members are name and price. 
// (Choose suitable type of data typeas int, float, chat etc.).  
// Declare a friend function find_discout(class_type  object)in  both  class  science  and  history to  calculate discount. 
// Define member functions to assign values to name and price and display name of the  book, original price and discounted price.  
// An  additional  data  member  and  member functions can be defined if needed.

class science
{
    int price;
    char name[10];
public:
    friend int find_discount();
};


class history
{

public:
    
};
