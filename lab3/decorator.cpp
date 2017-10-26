class decorator: public base{
  public:
    decorator();
    decorator(double value);
    virtual double evaluate();
  private:
    double value;
};

