/*
 * ring.h
 *
 *  Created on: 16-Jan-2020
 *      Author: in0suv
 */

#ifndef RING_H_
#define RING_H_



#include<iostream>

template<class T>
class Ring{

public:
	class iterator;

T* m_Values;
int m_pos;
int m_size;


Ring(int size1):m_size(size1),m_Values(NULL),m_pos(0)
{
	m_Values=new T[m_size];

}

void add(const T &value)
{

	m_Values[m_pos]=value;

	if(m_pos == m_size)
	{

		m_pos=0;
	}
	m_pos++;

}

T& get(int position)
{

	return m_Values[position];

}


iterator begin()
{

	return iterator(0,this);
}

iterator end()
{

	return iterator(m_size, this);
}
int size()
{
	return m_size;
}


};


template<class T>
class Ring<T>::iterator{


	int m_ipos;

	Ring *ring_ptr;
public:

iterator(int position, Ring* ringptr):m_ipos(position),ring_ptr(ringptr)
		{

		}


iterator& operator++(int)
		{
	m_ipos++;
	return *this;
		}

T& operator*()
{

	return ring_ptr->m_Values[m_ipos];
}

bool operator !=(iterator ptr)//parameter:: here the ring_obj.end() will call the constructor
		//there it is passing as value of the object..
		{

	return ( m_ipos  != ptr.m_ipos);
		}
};



#endif /* RING_H_ */
