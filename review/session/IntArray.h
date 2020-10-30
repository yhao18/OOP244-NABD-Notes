#ifndef SDDS_INTARRAY_H_
#define SDDS_INTARRAY_H_
namespace sdds {
   class IntArray {
      int* m_data;
      unsigned int m_size;
   public:
      IntArray(unsigned int size);
      ~IntArray();
      int& element(unsigned int index);
      int& operator[](unsigned int index);
      unsigned int size()const;
   };
}



#endif // !SDDS_INTARRAY_H_
