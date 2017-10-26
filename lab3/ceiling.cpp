class ceiling: public decorator{
  public:
    ceiling(double value): decorator(value){}
    double ceiling::evaluate(){
      return (left_child->evaluate()-right_child->evaluate());
    }

   private:
    void ceil() { cout<<"ceil()"<<endl; }
};

