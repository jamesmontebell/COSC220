/*
  vectorAux.cpp
  Implementations of template functions 
  Cosc-220   Lab 7

  Thomas Anastasio
  Created: February 25, 2003
  Current: March 13, 2003
*/


//////////   THIS CODE IS PROVIDED TO STUDENTS   /////////////




#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
void removeDup(std::vector<T> & v)
{
  typename vector<T>::iterator i;
  typename vector<T>::iterator j;

  for(i = v.begin(); i != v.end(); i++){
    for(j = i + 1; j < v.end(); j++){
      if(*i == *j){
        v.erase(j);
      }
    }
  }
 /* while(i != v.end()){
    int count = 0;
    while(j != v.end()){
      if(j+1 == i){
        count++;
      }
      j++;
    }
    if(count > 1){
      v.erase(i);
    }
    if(count == 1 && count == 0){
      i++;
    }
    count = 0;
  }*/
}


template <typename T>
unsigned seqVectSearch(const std::vector<T> & v, unsigned first, 
		       unsigned last, const T& target)
{
  unsigned i = first;
    while((v[i] != target) && (v[i] != last)){
        i++;
        if(v[i] == target)
            return i;
    }
  return last; 
}

template <typename T>
void writeVector(const std::vector<T> & v)
{
  unsigned i;
  unsigned n = v.size();

  for (i = 0; i < n; i++)
    std::cout << v[i] << ' ';
  std::cout << std::endl;
}