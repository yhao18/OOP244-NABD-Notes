#include "IntArray.h"
namespace sdds {
   IntArray::IntArray(unsigned int size) {
      m_data = new int[size];
      m_size = size;
      /*  initializtion if needed 
      for (int i = 0; i < size; m_data[i++] = 0);
      */
   }
   IntArray::~IntArray() {
      delete[] m_data;
      // m_data = nullptr; m_data will be gone, no use
   }
   int& IntArray::element(unsigned int index) {
      return m_data[index % m_size];
   }
   int& IntArray::operator[](unsigned int index) {
      return element(index);
   }
   unsigned int IntArray::size() const {
      return m_size;
   }
}
