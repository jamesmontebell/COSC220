#include <list>
using std::list;

template <typename T>

typename list<T>::iterator seqSearch (typename list<T>::iterator first, 
    typename list<T>::iterator last, const T& target){
        while(first != last){
            if(first == target){
                return first;
            }
            first++;
        }
}

